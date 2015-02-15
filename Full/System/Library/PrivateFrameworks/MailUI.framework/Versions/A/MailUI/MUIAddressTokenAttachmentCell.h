/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTokenAttachmentCell.h>

@interface MUIAddressTokenAttachmentCell : NSTokenAttachmentCell {

	char _displayAsExternal;
	char _neverShowSeparator;

}

@property (assign,nonatomic) char displayAsExternal;              //@synthesize displayAsExternal=_displayAsExternal - In the implementation block
@property (assign) char neverShowSeparator;                       //@synthesize neverShowSeparator=_neverShowSeparator - In the implementation block
+(id)colorForExternalDomain;
-(void)setDisplayAsExternal:(char)arg1 ;
-(char)displayAsExternal;
-(void)setNeverShowSeparator:(char)arg1 ;
-(id)tokenTintColor;
-(char)neverShowSeparator;
@end

