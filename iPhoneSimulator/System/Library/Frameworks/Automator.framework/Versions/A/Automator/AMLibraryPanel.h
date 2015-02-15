/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSPanel.h>

@class AMLibraryViewController;

@interface AMLibraryPanel : NSPanel {

	AMLibraryViewController* _libraryViewController;

}
+(id)sharedLibraryPanel;
-(id)selectedActions;
-(id)selectedVariables;
-(void)displayActionsByApplication:(id)arg1 ;
-(void)displayActionsByCategory:(id)arg1 ;
-(void)displayActions:(id)arg1 ;
-(void)displayVariables:(id)arg1 ;
-(void)dealloc;
-(void)close;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
@end

