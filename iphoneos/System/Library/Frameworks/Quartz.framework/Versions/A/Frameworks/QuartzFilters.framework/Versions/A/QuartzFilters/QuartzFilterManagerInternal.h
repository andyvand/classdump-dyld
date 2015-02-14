/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class QFilterView, QFilterActionMenu, NSPanel, NSMutableArray, NSArray, QuartzFilterManager;

@interface QuartzFilterManagerInternal : NSObject {

	QFilterView* mFilterView;
	QFilterActionMenu* mFilterActionMenu;
	NSPanel* mFilterPanel;
	NSMutableArray* mFilterArray;
	NSMutableArray* mFilterDataSourceArray;
	NSArray* mFilterDomains;
	NSArray* mFilterCategories;
	NSArray* mFilterObjects;
	QuartzFilterManager* mQuartzFilterManager;
	id mDelegate;

}
+(void)loadFiltersFromLibrary:(id)arg1 filterArray:(id)arg2 ;
+(void)loadFiltersFromDirectory:(id)arg1 filterArray:(id)arg2 ;
+(char)writeFilterXML:(id)arg1 toURL:(id)arg2 ;
+(char)removeFilterFile:(id)arg1 ;
+(id)filtersInDomains:(id)arg1 Categories:(id)arg2 Objects:(id)arg3 ;
+(id)internalForDomains:(id)arg1 Categories:(id)arg2 Objects:(id)arg3 Manager:(id)arg4 ;
-(void)help:(id)arg1 ;
-(void)filterNotification:(id)arg1 type:(int)arg2 info:(void*)arg3 ;
-(void)removeQFilterCellViews:(id)arg1 ;
-(void)updateControlButtonsForOutlineViewSelection;
-(void)notifySelectionDidChange;
-(void)removeFilter:(id)arg1 ;
-(id)initWithDomains:(id)arg1 Categories:(id)arg2 Objects:(id)arg3 Manager:(id)arg4 ;
-(id)writeFilter:(id)arg1 toLocation:(id)arg2 ;
-(id)addFilterToRegistry:(id)arg1 properties:(id)arg2 ;
-(void)initializeDataSource:(id)arg1 ;
-(void)addFilterNotification:(id)arg1 ;
-(void)removeFilterNotification:(id)arg1 ;
-(void)updateFilterNotification:(id)arg1 ;
-(id)filterView;
-(char)reallySaveFilter:(id)arg1 notification:(id)arg2 ;
-(id)saveFilter:(id)arg1 ;
-(void)removeFilterSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void*)arg3 ;
-(void)reallyRemoveFilter:(id)arg1 ;
-(char)saveFilter:(id)arg1 notification:(id)arg2 ;
-(id)currentFilterURL;
-(id)actionMenuFilter:(id)arg1 ;
-(void)expandFilter:(id)arg1 ;
-(void)addComponentAction:(id)arg1 componentID:(int)arg2 ;
-(id)importFilter:(id)arg1 ;
-(id)filterPanel;
-(char)selectFilterByURL:(id)arg1 ;
-(id)quartzFilterManager;
-(void)FilterAddButtonAction:(id)arg1 ;
-(void)FilterApplyButtonAction:(id)arg1 ;
-(void)FilterDuplicateAction:(id)arg1 ;
-(void)FilterLockUnlockAction:(id)arg1 ;
-(void)FilterRemoveButtonAction:(id)arg1 ;
-(void)AddComponentAssignProfileAction:(id)arg1 ;
-(void)AddComponentCommentsAction:(id)arg1 ;
-(void)AddComponentConverToProfileAction:(id)arg1 ;
-(void)AddComponentDefaultProfileAction:(id)arg1 ;
-(void)AddComponentDomainsAction:(id)arg1 ;
-(void)AddComponentImageCompressionAction:(id)arg1 ;
-(void)AddComponentImageConvolutionAction:(id)arg1 ;
-(void)AddComponentImageSamplingAction:(id)arg1 ;
-(void)AddComponentIntermediateTransformAction:(id)arg1 ;
-(void)AddComponentMonoImageSamplingAction:(id)arg1 ;
-(void)AddComponentPDFPoliciesAction:(id)arg1 ;
-(void)AddComponentPDFX3Action:(id)arg1 ;
-(void)AddComponentRenderingIntentAction:(id)arg1 ;
-(id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 byItem:(id)arg3 ;
-(id*)actionMenu;
-(id)currentFilter;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)update;
-(char)validateMenuItem:(id)arg1 ;
-(void)submenuAction:(id)arg1 ;
-(int)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(int)arg2 ofItem:(id)arg3 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3 ;
@end

