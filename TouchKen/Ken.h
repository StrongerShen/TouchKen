//
//  Ken.h
//  TouchKen
//
//  Created by Stronger Shen on 2015/1/30.
//  Copyright (c) 2015年 MobileIT. All rights reserved.
//
//詹子強到此一遊
#import <UIKit/UIKit.h>

@class Ken;

//這裡是 Protocol
@protocol KenDelegate <NSObject>

@optional
- (void)Ken:(Ken *)ken didFinishedMovedWithStatus:(NSDictionary *)status;
- (void)didTouchedKenTag:(long)tag;
- (void)didDropInGray:(long)tag;
@end

//這裡是 Class
@interface Ken : UIView
{
    CGPoint location;
}
//我是蘇坡面
@property (strong, nonatomic) id<KenDelegate> delegate;

- (Ken *)initWithPoint:(CGPoint)point atDirection:(int)direction;
<<<<<<< HEAD
- (void)GoRight;
- (void)GoLeft;

=======

- (void)GoRight;
- (void)GoLeft;
<<<<<<< HEAD
>>>>>>> 696e054564413bc766a770dcb58d7ac5c4194dac
=======

>>>>>>> c09877b83ec370a84409e7498ace520acfe859da
@end



