//
//  JSTAdvertViewDelegate.h
//  JSTMobClick
//
//  Created by wangj on 16/8/30.
//  Copyright © 2016年 Czj. All rights reserved.
//

#import <Foundation/Foundation.h>


@class JSTAdvertView;

@protocol JSTAdvertViewDelegate <NSObject>

@optional
/**
 *  广告数据请求成功
 */
- (void)adDataRequestSucess;
/**
 *  广告数据请求失败
 */
- (void)adDataRequestFailure:(NSString *)error;
/**
 *  广告展示成功(如果在JSTAdvertView之后还有添加View,需要在调用时刷新View的frame)
 */
- (void)didAdLoadFinish;
/**
 *  移除当前广告
 *  advertIndex:  用于区分不同广告的参数
 */
- (void)adViewDidRemoved:(NSString *)advertIndex;




/**
 *  广告即将展示
 */
- (void)adWillPresentScreen:(JSTAdvertView *)preroll;
/**
 *  广告展示失败
 */
- (void)didAdLoadFailed;

@end
