/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSDictionary;

@interface NSDirectoryEnumerator : NSEnumerator

@property (copy,readonly) NSDictionary * fileAttributes; 
@property (copy,readonly) NSDictionary * directoryAttributes; 
@property (readonly) unsigned long long level; 
-(NSDictionary *)directoryAttributes;
-(void)skipDescendants;
-(id)nextObject;
-(unsigned long long)level;
-(NSDictionary *)fileAttributes;
-(void)skipDescendents;
@end

