/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKBookshelf.bundle/Contents/MacOS/BKBookshelf
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKDropViewDelegate <NSObject>
@required
-(char)dropView:(id)arg1 urlsSupported:(id)arg2 dragTypeIsImage:(char*)arg3;
-(id)dropView:(id)arg1 dropRectsForURLs:(id)arg2;
-(char)dropView:(id)arg1 urlsDropped:(id)arg2 assetID:(id)arg3;
-(CGRect*)dropView:(id)arg1 convertRectToDropView:(CGRect)arg2;

@end
