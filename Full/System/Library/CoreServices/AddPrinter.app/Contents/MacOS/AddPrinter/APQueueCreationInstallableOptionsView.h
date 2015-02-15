/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:34:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/AddPrinter.app/Contents/MacOS/AddPrinter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddPrinter/AddPrinter-Structs.h>
#import <AppKit/NSBox.h>

@class NSMutableArray, NSView, NSScrollView;

@interface APQueueCreationInstallableOptionsView : NSBox {

	NSMutableArray* ppdKeyArray;
	NSMutableArray* ppdUIArray;
	NSMutableArray* ppdUILabelArray;
	NSView* mainView;
	NSScrollView* scrollView;
	ppd_file_s* _ppd;

}
-(unsigned)getPPDKeyIndex:(id)arg1 ;
-(void)setPPDForPath:(id)arg1 ;
-(id)ppdWithChangesWith:(id)arg1 ;
-(ppd_file_s*)ppd;
-(void)setPPDUIArray:(id)arg1 ;
-(void)setPPDUILabelArray:(id)arg1 ;
-(void)setMainView:(id)arg1 ;
-(void)PPDMarkDefaultInstallableOptions:(ppd_file_s*)arg1 ;
-(void)createUIContols;
-(const char*)getCurrentValue:(const char*)arg1 ;
-(void)updateConflicts:(id)arg1 ;
-(void)setButtonToolTip:(id)arg1 optionKey:(id)arg2 choiceKey:(id)arg3 ;
-(void)setMenuItemToolTip:(id)arg1 optionKey:(id)arg2 choiceKey:(id)arg3 ;
-(void)sizePopupToLargestItem:(id)arg1 ;
-(id)getConflictList:(id)arg1 choiceKey:(id)arg2 ;
-(float)maxTitleWidth:(id)arg1 size:(float)arg2 ;
-(void)finalize;
-(void)dealloc;
-(void)setScrollView:(id)arg1 ;
@end
