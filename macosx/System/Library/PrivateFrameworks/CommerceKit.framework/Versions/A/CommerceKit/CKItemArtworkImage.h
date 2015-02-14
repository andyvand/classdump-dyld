/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface CKItemArtworkImage : NSObject {

	long long _height;
	NSString* _imageKind;
	char _prerendered;
	NSURL* _url;
	long long _width;

}

@property (nonatomic,readonly) long long height;                  //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) long long width;                   //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) NSString * imageKind;              //@synthesize imageKind=_imageKind - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                       //@synthesize url=_url - In the implementation block
-(id)initWithArtworkDictionary:(id)arg1 ;
-(NSString *)imageKind;
-(id)description;
-(NSURL *)URL;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)width;
-(long long)height;
@end

