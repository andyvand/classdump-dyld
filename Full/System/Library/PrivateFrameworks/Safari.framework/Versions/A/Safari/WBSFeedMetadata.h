/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/NSSecureCoding.h>

@class NSString, NSURL;

@interface WBSFeedMetadata : NSObject <NSSecureCoding> {

	NSString* _title;
	NSURL* _imageURL;
	NSURL* _homepageURL;

}

@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * imageURL;                 //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) NSURL * homepageURL;              //@synthesize homepageURL=_homepageURL - In the implementation block
+(char)supportsSecureCoding;
-(NSURL *)imageURL;
-(NSURL *)homepageURL;
-(id)initWithTitle:(id)arg1 imageURL:(id)arg2 homepageURL:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)title;
@end

