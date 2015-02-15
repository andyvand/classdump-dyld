/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/BKBookshelf.bundle/Contents/MacOS/BKBookshelf
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BKBookshelf/BKBookshelf-Structs.h>
#import <BKBookshelf/BKBookshelfCategoryFilterViewController.h>
#import <BKBookshelf/NSTextStorageDelegate.h>
#import <BKBookshelf/NSTextViewDelegate.h>

@class NSString, NSArrayController, IMFourStateImageButton, BKBookshelfCollectionCategoryAllCollection, NSArray, NSTextView, NSDictionary;

@interface BKBookshelfCollectionsCategoryTableViewController : BKBookshelfCategoryFilterViewController <NSTextStorageDelegate, NSTextViewDelegate> {

	NSString* _selectedCollectionID;
	char _hasPurchasedCollection;
	char _loading;
	char _fieldEditorHasCorrectAttributes;
	NSArrayController* _collectionsArrayController;
	IMFourStateImageButton* _addCollectionsButton;
	NSArrayController* _arrayController;
	BKBookshelfCollectionCategoryAllCollection* _allCollection;
	NSArray* _defaultCollections;
	NSArray* _userCollections;
	long long _dropIndex;
	long long _dropUnderIndex;
	NSTextView* _fieldEditor;
	NSString* _fieldEditorBeginningString;
	NSDictionary* _cellAttributes;

}

@property (nonatomic,retain) NSArrayController * collectionsArrayController;                          //@synthesize collectionsArrayController=_collectionsArrayController - In the implementation block
@property (__weak) IMFourStateImageButton * addCollectionsButton;                                     //@synthesize addCollectionsButton=_addCollectionsButton - In the implementation block
@property (assign) NSString * selectedCollectionID; 
@property (nonatomic,retain) NSArrayController * arrayController;                                     //@synthesize arrayController=_arrayController - In the implementation block
@property (assign,nonatomic) char hasPurchasedCollection;                                             //@synthesize hasPurchasedCollection=_hasPurchasedCollection - In the implementation block
@property (nonatomic,retain) BKBookshelfCollectionCategoryAllCollection * allCollection;              //@synthesize allCollection=_allCollection - In the implementation block
@property (nonatomic,retain) NSArray * defaultCollections;                                            //@synthesize defaultCollections=_defaultCollections - In the implementation block
@property (nonatomic,retain) NSArray * userCollections;                                               //@synthesize userCollections=_userCollections - In the implementation block
@property (assign,nonatomic) long long dropIndex;                                                     //@synthesize dropIndex=_dropIndex - In the implementation block
@property (assign,nonatomic) long long dropUnderIndex;                                                //@synthesize dropUnderIndex=_dropUnderIndex - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                           //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) NSTextView * fieldEditor;                                                //@synthesize fieldEditor=_fieldEditor - In the implementation block
@property (assign,nonatomic) char fieldEditorHasCorrectAttributes;                                    //@synthesize fieldEditorHasCorrectAttributes=_fieldEditorHasCorrectAttributes - In the implementation block
@property (nonatomic,copy) NSString * fieldEditorBeginningString;                                     //@synthesize fieldEditorBeginningString=_fieldEditorBeginningString - In the implementation block
@property (nonatomic,retain) NSDictionary * cellAttributes;                                           //@synthesize cellAttributes=_cellAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)deleteSelectionFromTableView:(id)arg1 ;
-(void)tableView:(id)arg1 draggingExited:(id)arg2 ;
-(void)tableView:(id)arg1 draggingEnded:(id)arg2 ;
-(void)control:(id)arg1 textDidChange:(id)arg2 ;
-(void)control:(id)arg1 textDidEndEditing:(id)arg2 ;
-(id)tableView:(id)arg1 fieldEditorForCell:(id)arg2 ;
-(NSArrayController *)arrayController;
-(IMFourStateImageButton *)addCollectionsButton;
-(void)setHasPurchasedCollection:(char)arg1 ;
-(void)setAddCollectionsButton:(IMFourStateImageButton *)arg1 ;
-(long long)dropUnderIndex;
-(char)hasPurchasedCollection;
-(void)setArrayController:(NSArrayController *)arg1 ;
-(void)setCollectionsArrayController:(NSArrayController *)arg1 ;
-(void)setAllCollection:(BKBookshelfCollectionCategoryAllCollection *)arg1 ;
-(void)setSelectedCollectionID:(NSString *)arg1 ;
-(void)deleteCollection:(id)arg1 deleteBooks:(char)arg2 ;
-(id)addNewCollectionFromSource:(id)arg1 ;
-(NSArray *)userCollections;
-(BKBookshelfCollectionCategoryAllCollection *)allCollection;
-(NSString *)selectedCollectionID;
-(NSDictionary *)cellAttributes;
-(void)setDefaultCollections:(NSArray *)arg1 ;
-(void)setUserCollections:(NSArray *)arg1 ;
-(NSArrayController *)collectionsArrayController;
-(void)applicationDidResign;
-(id)_localizedTitleForNewCollection;
-(void)addCollectionButtonPressed:(id)arg1 ;
-(void)setFieldEditorBeginningString:(NSString *)arg1 ;
-(NSString *)fieldEditorBeginningString;
-(void)setFieldEditorHasCorrectAttributes:(char)arg1 ;
-(void)setDropUnderIndex:(long long)arg1 ;
-(NSArray *)defaultCollections;
-(void)setCellAttributes:(NSDictionary *)arg1 ;
-(char)fieldEditorHasCorrectAttributes;
-(void)setDropIndex:(long long)arg1 ;
-(long long)dropIndex;
-(NSTextView *)fieldEditor;
-(void)setLoading:(char)arg1 ;
-(char)isLoading;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)validateUserInterfaceItem:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(char)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(char)control:(id)arg1 textShouldBeginEditing:(id)arg2 ;
-(char)control:(id)arg1 textShouldEndEditing:(id)arg2 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(CGPoint)arg3 operation:(unsigned long long)arg4 ;
-(void)tableView:(id)arg1 updateDraggingItemsForDrag:(id)arg2 ;
-(char)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3 ;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(void)setFieldEditor:(NSTextView *)arg1 ;
-(void)awakeFromNib;
-(void)delete:(id)arg1 ;
-(void)textStorageWillProcessEditing:(id)arg1 ;
@end
