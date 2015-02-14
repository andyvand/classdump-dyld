/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@interface IKDatasourceDiff : NSObject
+(id)diffItemsArray:(id)arg1 withDataSource:(id)arg2 ;
+(void)applyDiff:(id)arg1 toOldArray:(id)arg2 withDataSource:(id)arg3 allocator:(id)arg4 allocatorSelector:(SEL)arg5 ;
+(char)indexItemsArray:(id)arg1 ;
+(CFDictionaryRef)_buildUIDtoIndexCache:(id)arg1 ;
+(unsigned long long)indexOfItemContainingDataSource:(id)arg1 inArray:(id)arg2 arrayIsIndexed:(char)arg3 newIndexIs:(int)arg4 uidToIndexCache:(CFDictionaryRef)arg5 ;
+(char)indexDataSourceArray:(id)arg1 ;
@end

