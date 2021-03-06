/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString;

@interface BackForwardItemPersistentState : NSObject {

	NSURL* _url;
	NSString* _title;

}

@property (nonatomic,readonly) NSURL * url;                   //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)initWithURL:(id)arg1 title:(id)arg2 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(id)dictionaryRepresentation;
@end

