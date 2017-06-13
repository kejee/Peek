//
//  leftHomeView.h
//  Peek
//
//  Created by pjpjpj on 2017/6/13.
//  Copyright © 2017年 #incloud. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LeftSliderView.h"

@protocol leftHomeViewDelegate <NSObject>

- (void)myPublishAction;
- (void)editAction;
- (void)messageAction;

@end

@interface leftHomeView : UIView <LeftSliderViewDelegate>

@property (nonatomic, weak) id<leftHomeViewDelegate> viewDelega;

@end
