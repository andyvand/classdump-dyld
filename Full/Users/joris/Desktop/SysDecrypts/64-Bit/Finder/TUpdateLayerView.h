/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/TView.h>

@class NSColor;

@interface TUpdateLayerView : TView

@property (nonatomic,retain) NSColor * backgroundColor; 
-(void)initCommon;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(void)updateLayer;
-(char)wantsUpdateLayer;
@end
