//
//  NSDate+Extension.h
//  xsd
//
//  Created by MacBook Air on 15-9-16.
//  Copyright (c) 2015年 MacBook Air. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Extension)

/**
 *  判断某个时间是否为今年
 */
- (BOOL)isThisYear;

/**
 *  判断某个时间是否为昨天
 */
- (BOOL)isYesterday;

/**
 *  判断某个时间是否为今天
 */
- (BOOL)isToday;

@end
