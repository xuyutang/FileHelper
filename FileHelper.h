//
//  FileHelper.h
//  JSLite
//
//  Created by xyt on 16/11/5.
//  Copyright © 2016年 Juicyshare. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FileHelper : NSObject

/*
 *获取文件大小
 */
+(NSString*) getFileSize:(NSString*) filePath;

/*
 *获取视频时长
 */
+(NSString*) getVideoSeconds:(NSString*) videPath;

+(NSString *) formartFileSizeToString:(int) size;

@end
