/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class PBOXRemoteMediaBrowserPanel;

@interface NSMediaLibraryBrowserController : NSObject {

	id _browserProxy;

}

@property (getter=isVisible) char visible; 
@property (assign) CGRect frame; 
@property (assign) unsigned long long mediaLibraries; 
@property (readonly) PBOXRemoteMediaBrowserPanel * browserProxy;              //@synthesize browserProxy=_browserProxy - In the implementation block
+(unsigned long long)maskForMediaTypeEnum:(unsigned long long)arg1 ;
+(unsigned long long)mediaTypeEnumForMask:(unsigned long long)arg1 ;
+(id)sharedMediaLibraryBrowserController;
-(id)init;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)orderOut:(id)arg1 ;
-(void)orderFront:(id)arg1 ;
-(char)isVisible;
-(void)setVisible:(char)arg1 ;
-(id)frameAutosaveName;
-(void)setFrameAutosaveName:(id)arg1 ;
-(PBOXRemoteMediaBrowserPanel *)browserProxy;
-(unsigned long long)mediaLibraries;
-(void)setMediaLibraries:(unsigned long long)arg1 ;
-(void)togglePanel:(id)arg1 ;
@end

