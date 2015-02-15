/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BrowserKit.framework/BrowserKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BrowserKit/BrowserKit-Structs.h>
#import <BrowserKit/BKQueryModule.h>

@class NSProPredicateEditor, NSPredicate;

@interface BKPredicateEditorModule : BKQueryModule {

	NSProPredicateEditor* _predicateEditor;
	NSPredicate* _inheritedPredicate;
	struct {
		unsigned _settingSelectionPath : 1;
		unsigned _unused : 31;
	}  _predicateEditorModuleFlags;
	void* _reservedPredicateEditorModule2;
	void* _reservedPredicateEditorModule3;

}
+(void)updateConfigurationWith:(id)arg1 ;
+(id)predicateLayoutWithName:(id)arg1 ;
+(id)defaultModuleNibName;
+(id)formattingDictionary;
-(id)selectionPath;
-(char)setSelectionPath:(id)arg1 ;
-(id)searchPredicates;
-(void)clearTemplates;
-(void)buildTemplates;
-(void)_ruleEditorRowCountDidChangeNotification:(id)arg1 ;
-(void)predicateChanged:(id)arg1 ;
-(double)predicateEditorHeight;
-(CGSize)viewMinSize;
-(void)setItems:(id)arg1 ;
-(void)dealloc;
-(void)addRow;
-(void)awakeFromNib;
-(void)viewDidLoad;
@end
