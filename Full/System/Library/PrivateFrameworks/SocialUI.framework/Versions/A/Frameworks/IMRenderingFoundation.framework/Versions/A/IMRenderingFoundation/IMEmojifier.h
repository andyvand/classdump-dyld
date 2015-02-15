/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/Frameworks/IMRenderingFoundation.framework/Versions/A/IMRenderingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableCharacterSet;

@interface IMEmojifier : NSObject {

	NSMutableCharacterSet* _emojiCharSet;

}
+(id)sharedInstance;
-(void)_emojifyString:(id)arg1 maxLength:(unsigned long long)arg2 callback:(/*^block*/id)arg3 ;
-(void)addEmojiFontToAttributedString:(id)arg1 ;
-(void)addEmojiFontToAttributedString:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)init;
@end

