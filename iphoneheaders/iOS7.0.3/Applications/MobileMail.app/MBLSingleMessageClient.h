/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MBLSingleMessageClient <NSObject>
@optional
-(void)notifyFullMessageContentsUnavailableForMessage:(id)arg1 error:(id)arg2;

@required
-(BOOL)wantsContentsOfType:(int)arg1;
-(void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2;
-(void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2;
-(double)ordering;
-(id)message;
-(unsigned)priority;
@end
