/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:45:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Photo Booth.app/Contents/MacOS/Photo Booth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IKSlideshowDataSource
@optional
-(char)canExportSlideshowItemAtIndex:(unsigned long long)arg1 toApplication:(id)arg2;
-(void)slideshowDidChangeCurrentIndex:(unsigned long long)arg1;
-(id)nameOfSlideshowItemAtIndex:(unsigned long long)arg1;
-(void)slideshowWillStart;
-(void)slideshowDidStop;

@required
-(unsigned long long)numberOfSlideshowItems;
-(id)slideshowItemAtIndex:(unsigned long long)arg1;

@end
