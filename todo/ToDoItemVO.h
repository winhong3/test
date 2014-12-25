//
//  ToDoItemVO.h
//  todo
//
//  Created by chenjie on 14/12/12.
//  Copyright (c) 2014年 winghong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItemVO : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
