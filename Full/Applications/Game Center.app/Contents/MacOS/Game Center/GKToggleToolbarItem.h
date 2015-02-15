/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:35:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Game Center.app/Contents/MacOS/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <AppKit/NSToolbarItem.h>

@class NSButton, NSImage;

@interface GKToggleToolbarItem : NSToolbarItem {

	NSButton* _button;
	NSImage* _mainImage;
	NSImage* _altImage;

}

@property (assign) NSButton * button;                     //@synthesize button=_button - In the implementation block
@property (getter=isSelected) char selected; 
@property (retain) NSImage * mainImage;                   //@synthesize mainImage=_mainImage - In the implementation block
@property (retain) NSImage * altImage;                    //@synthesize altImage=_altImage - In the implementation block
-(void)setMainImage:(NSImage *)arg1 ;
-(void)setAltImage:(NSImage *)arg1 ;
-(id)titleTextAttributesEnabled:(char)arg1 ;
-(void)didBecomeActive:(id)arg1 ;
-(void)didResignActive:(id)arg1 ;
-(void)updateLabelForEnabledState;
-(NSImage *)mainImage;
-(NSImage *)altImage;
-(void)setButton:(NSButton *)arg1 ;
-(void)dealloc;
-(CGSize)minSize;
-(void)awakeFromNib;
-(char)isSelected;
-(NSButton *)button;
-(void)setSelected:(char)arg1 ;
@end
