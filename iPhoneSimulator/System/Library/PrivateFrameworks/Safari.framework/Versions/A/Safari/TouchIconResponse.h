/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:12 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/SiteMetadataResponse.h>

@class NSImage, NSColor, WebBookmark, NSData, NSURL;

@interface TouchIconResponse : SiteMetadataResponse

@property (nonatomic,readonly) NSImage * touchIcon; 
@property (nonatomic,readonly) NSColor * extractedBackgroundColor; 
@property (nonatomic,readonly) NSImage * prerenderedIcon; 
@property (nonatomic,readonly) WebBookmark * bookmark; 
@property (getter=isGenerated,nonatomic,readonly) char generated; 
@property (nonatomic,readonly) char iconUsesCustomClipping; 
@property (nonatomic,readonly) NSData * faviconData; 
@property (nonatomic,readonly) NSURL * faviconIconURL; 
@property (nonatomic,readonly) NSURL * faviconPageURL; 
+(id)responseWithBookmark:(id)arg1 touchIcon:(id)arg2 generated:(char)arg3 extractedBackgroundColor:(id)arg4 ;
+(id)responseWithURL:(id)arg1 touchIcon:(id)arg2 generated:(char)arg3 extractedBackgroundColor:(id)arg4 faviconData:(id)arg5 faviconIconURL:(id)arg6 faviconPageURL:(id)arg7 ;
+(id)responseWithURL:(id)arg1 touchIcon:(id)arg2 generated:(char)arg3 extractedBackgroundColor:(id)arg4 ;
-(WebBookmark *)bookmark;
-(NSImage *)touchIcon;
-(char)isGenerated;
-(NSColor *)extractedBackgroundColor;
-(NSImage *)prerenderedIcon;
-(NSData *)faviconData;
-(NSURL *)faviconIconURL;
-(NSURL *)faviconPageURL;
-(id)initWithBookmark:(id)arg1 url:(id)arg2 touchIcon:(id)arg3 generated:(char)arg4 extractedBackgroundColor:(id)arg5 faviconData:(id)arg6 faviconIconURL:(id)arg7 faviconPageURL:(id)arg8 ;
-(char)iconUsesCustomClipping;
@end

