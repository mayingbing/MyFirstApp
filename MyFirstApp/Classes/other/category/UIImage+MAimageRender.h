//
//  UIImage+MAimageRender.h
//  MyFirstApp
//
//  Created by apple on 16/2/20.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (MAimageRender)

+(instancetype)imageRenderingModeAlwaysOriginalWithImageName:(NSString *)imageName;
+ (instancetype)imageWithStretchableName:(NSString *)imageName;
@end
