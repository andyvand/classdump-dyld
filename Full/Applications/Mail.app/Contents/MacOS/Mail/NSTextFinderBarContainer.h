/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:37:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Mail.app/Contents/MacOS/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSView;


@protocol NSTextFinderBarContainer <NSObject>
@property (retain) NSView * findBarView; 
@property (getter=isFindBarVisible) char findBarVisible; 
@optional
-(id)contentView;

@required
-(NSView *)findBarView;
-(void)findBarViewDidChangeHeight;
-(void)setFindBarView:(id)arg1;
-(char)isFindBarVisible;
-(void)setFindBarVisible:(char)arg1;

@end
