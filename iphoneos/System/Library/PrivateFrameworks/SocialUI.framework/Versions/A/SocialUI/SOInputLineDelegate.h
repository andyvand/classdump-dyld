/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SOInputLineDelegate <NSTextViewDelegate>
@optional
-(char)inputLine:(id)arg1 didChangeSignificantly:(int)arg2;
-(void)inputLineRequestedPriorOutgoingMessage:(id)arg1;
-(void)inputLineRequestedNextOutgoingMessage:(id)arg1;
-(id)defaultTypingAttributesForInputLine:(id)arg1;
-(char)inputLineShouldInsertNewLine:(id)arg1;

@required
-(char)inputLineUsingiMessageService:(id)arg1;
-(char)inputLine:(id)arg1 canAttachFilesAtURLs:(id)arg2;

@end

