/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/NSPasteboardWriting.h>

@class NSURL, NSString;

@interface SOFilePasteboardItemWrapper : NSObject <NSPasteboardWriting> {

	NSURL* _url;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)writableTypesForPasteboard:(id)arg1 ;
-(unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
@end

