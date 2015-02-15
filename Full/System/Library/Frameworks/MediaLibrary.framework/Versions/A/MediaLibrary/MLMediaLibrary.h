/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MediaLibrary.framework/Versions/A/MediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MLMediaLibraryImpl, NSDictionary;

@interface MLMediaLibrary : NSObject {

	MLMediaLibraryImpl* _impl;

}

@property (copy,readonly) NSDictionary * mediaSources; 
+(void)unboxURLWithKey1:(id)arg1 key2:(id)arg2 inDictionary:(id)arg3 ;
+(void)initialize;
-(void)xpcConnectionWasInterrupted;
-(void)setMediaSources:(NSDictionary *)arg1 ;
-(NSDictionary *)mediaSources;
-(id)service;
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
@end
