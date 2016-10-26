//
//  JSTAdvertView.h
//  JSTMobClick
//
//  Created by Czj on 16/8/28.
//  Copyright © 2016年 Czj. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JSTAdvertViewDelegate.h"

/**  
    加载广告时
        实例JSTAdvertView
        设置frame
        传入广告ID
        添加到试图
 */
@interface JSTAdvertView : UIView
/**
 *  唯一交互应用提取广告的方法
 *  advertIndex: 用于区分不同广告的参数，保证每个参数值不同即可
 */
- (void)getAdvertId:(NSString *)advertId getAdvertIndex:(NSString *)advertIndex;
// 回调个应用的代理
@property (nonatomic,assign) id<JSTAdvertViewDelegate> delegate;
// 清理缓存
- (void)clearDisk;  //清空缓存

@end
