/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:23 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MessageFoldDelegate <NSObject>
@optional
-(void)messageFoldManager:(id)arg1 willFoldMessageWithContentOffset:(CGPoint)arg2;
-(void)messageFoldManager:(id)arg1 didUpdateFoldWithProgress:(float)arg2 fadeInAlpha:(float)arg3;
-(void)messageFoldManagerDidUnfoldMessage:(id)arg1;
@end
