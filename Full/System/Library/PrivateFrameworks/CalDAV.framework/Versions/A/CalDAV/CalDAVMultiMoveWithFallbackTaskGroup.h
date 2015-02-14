/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVMultiMoveWithFallbackTaskGroup.h>

@class NSDictionary, NSMutableDictionary;

@interface CalDAVMultiMoveWithFallbackTaskGroup : CoreDAVMultiMoveWithFallbackTaskGroup {

	NSDictionary* _sourceEntityScheduleTags;
	char _isAutoScheduleSupported;
	NSMutableDictionary* _destinationEntityScheduleTags;

}

@property (nonatomic,readonly) NSDictionary * sourceEntityScheduleTags;                          //@synthesize sourceEntityScheduleTags=_sourceEntityScheduleTags - In the implementation block
@property (nonatomic,readonly) char isAutoScheduleSupported;                                     //@synthesize isAutoScheduleSupported=_isAutoScheduleSupported - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * destinationEntityScheduleTags;              //@synthesize destinationEntityScheduleTags=_destinationEntityScheduleTags - In the implementation block
-(void)_completedPropFindTask:(id)arg1 intermediateETag:(id)arg2 intermediateScheduleTag:(id)arg3 destinationFilename:(id)arg4 ;
-(NSDictionary *)sourceEntityScheduleTags;
-(void)dealloc;
-(char)isAutoScheduleSupported;
-(id)initWithSourceURLs:(id)arg1 destinationURL:(id)arg2 overwrite:(char)arg3 useFallback:(char)arg4 sourceEntityDataPayloads:(id)arg5 sourceEntityDataContentTypes:(id)arg6 sourceEntityETags:(id)arg7 sourceEntityScheduleTags:(id)arg8 accountInfoProvider:(id)arg9 taskManager:(id)arg10 isAutoScheduleSupported:(char)arg11 ;
-(NSMutableDictionary *)destinationEntityScheduleTags;
-(void)_setTagsForDestinationEntityAtURL:(id)arg1 fromTaskResponseHeaders:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

