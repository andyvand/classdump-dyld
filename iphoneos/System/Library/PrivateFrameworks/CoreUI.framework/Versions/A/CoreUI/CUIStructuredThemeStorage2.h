/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CUIStructuredThemeStorage2
@optional
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3;
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2;

@required
-(const renditionkeytoken*)renditionKeyForName:(id)arg1;
-(char)canGetRenditionWithKey:(const renditionkeytoken*)arg1;
-(id)allImageNames;
-(id)imagesWithName:(id)arg1;

@end

