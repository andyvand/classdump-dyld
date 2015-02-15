/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCoding.h>

@class NSString;

@interface NSMenuTemplate : NSObject <NSCoding> {

	NSString* title;
	CGPoint location;
	id view;
	NSString* menuClassName;
	id supermenu;
	id realObject;
	id extension;
	char isWindowsMenu;
	char isRequestMenu;
	char isFontMenu;
	char interfaceStyle;
	char* cMenuClassName;
	char disabled;
	id popupCell;

}
+(void)initialize;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)numberOfItems;
-(id)menuClassName;
-(char)_pullsDown;
-(id)supermenu;
-(char)_isEnabled;
-(id)nibInstantiate;
-(void)setSupermenu:(id)arg1 ;
-(void)_setEnabled:(char)arg1 ;
-(void)_setOwnedByPopUp:(id)arg1 ;
-(void)_setTitle:(id)arg1 ;
-(void)_setMenuClassName:(id)arg1 ;
-(id)itemMatrix;
-(void)_setPullsDown:(char)arg1 ;
@end

