/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MailStatusBarViewDelegate
@required
-(id)statusWithCount:(int*)arg1 total:(int*)arg2 progress:(float*)arg3 state:(unsigned*)arg4;
-(id)updatedSubtitleString;
-(void)statusBarView:(id)arg1 stateDidChange:(unsigned)arg2;
-(int)interfaceOrientation;
-(id)lastUpdated;
@end
