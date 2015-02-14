/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/IMPlatformCore.framework/Versions/A/IMPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMPlatformCore/IMPlatformCore-Structs.h>
@class IMCollectionViewLayout, NSSet, NSDictionary, NSDate, NSEvent, NSMutableArray, IMCollectionViewTransaction, NSArray;

@interface IMCollectionViewUpdate : NSObject {

	char _expectingDropMoveTransactions;
	char _didAcceptDropMoveTransactions;
	char _hasChanges;
	char _areChangesValid;
	char _finish;
	char _isDragAndDrop;
	char _isDrop;
	int _hint;
	unsigned long long _sourceNumberOfItems;
	unsigned long long _targetNumberOfItems;
	IMCollectionViewLayout* _sourceLayout;
	IMCollectionViewLayout* _targetLayout;
	NSSet* _sourceVisibleCellIndexPaths;
	NSSet* _targetVisibleCellIndexPaths;
	NSDictionary* _sourceVisibleSupplementaryViewIndexPaths;
	NSDictionary* _targetVisibleSupplementaryViewIndexPaths;
	NSSet* _sourceVisibleDecorationViewKinds;
	NSSet* _targetVisibleDecorationViewKinds;
	NSDate* _timestamp;
	NSEvent* _dragEvent;
	NSMutableArray* _dragCellTransactions;
	NSMutableArray* _dropCellTransactios;
	IMCollectionViewTransaction* _emptyIndexPathTransaction;
	long long _updateCount;
	NSMutableArray* _indexMap;
	NSArray* _allChanges;
	NSArray* _cellChanges;
	NSArray* _supplementaryViewChanges;
	NSArray* _decorationViewChanges;
	NSArray* _dragAndDropChanges;
	NSMutableArray* _insertCellTransactions;
	NSMutableArray* _deleteCellTransactions;
	NSMutableArray* _updateCellTransactions;
	NSMutableArray* _moveCellTransactions;
	NSMutableArray* _insertSupplementaryViewTransactions;
	NSMutableArray* _deleteSupplementaryViewTransactions;
	NSMutableArray* _updateSupplementaryViewTransactions;
	NSMutableArray* _moveSupplementaryViewTransactions;
	NSMutableArray* _mutableCompletionBlocks;
	CGPoint _dropPoint;

}

@property (assign,nonatomic) unsigned long long sourceNumberOfItems;                               //@synthesize sourceNumberOfItems=_sourceNumberOfItems - In the implementation block
@property (assign,nonatomic) unsigned long long targetNumberOfItems;                               //@synthesize targetNumberOfItems=_targetNumberOfItems - In the implementation block
@property (nonatomic,copy) IMCollectionViewLayout * sourceLayout;                                  //@synthesize sourceLayout=_sourceLayout - In the implementation block
@property (nonatomic,retain) IMCollectionViewLayout * targetLayout;                                //@synthesize targetLayout=_targetLayout - In the implementation block
@property (nonatomic,retain) NSSet * sourceVisibleCellIndexPaths;                                  //@synthesize sourceVisibleCellIndexPaths=_sourceVisibleCellIndexPaths - In the implementation block
@property (nonatomic,retain) NSSet * targetVisibleCellIndexPaths;                                  //@synthesize targetVisibleCellIndexPaths=_targetVisibleCellIndexPaths - In the implementation block
@property (nonatomic,retain) NSDictionary * sourceVisibleSupplementaryViewIndexPaths;              //@synthesize sourceVisibleSupplementaryViewIndexPaths=_sourceVisibleSupplementaryViewIndexPaths - In the implementation block
@property (nonatomic,retain) NSDictionary * targetVisibleSupplementaryViewIndexPaths;              //@synthesize targetVisibleSupplementaryViewIndexPaths=_targetVisibleSupplementaryViewIndexPaths - In the implementation block
@property (nonatomic,retain) NSSet * sourceVisibleDecorationViewKinds;                             //@synthesize sourceVisibleDecorationViewKinds=_sourceVisibleDecorationViewKinds - In the implementation block
@property (nonatomic,retain) NSSet * targetVisibleDecorationViewKinds;                             //@synthesize targetVisibleDecorationViewKinds=_targetVisibleDecorationViewKinds - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSEvent * dragEvent;                                                  //@synthesize dragEvent=_dragEvent - In the implementation block
@property (assign,nonatomic) CGPoint dropPoint;                                                    //@synthesize dropPoint=_dropPoint - In the implementation block
@property (nonatomic,retain) NSMutableArray * dragCellTransactions;                                //@synthesize dragCellTransactions=_dragCellTransactions - In the implementation block
@property (nonatomic,retain) NSMutableArray * dropCellTransactios;                                 //@synthesize dropCellTransactios=_dropCellTransactios - In the implementation block
@property (nonatomic,retain) IMCollectionViewTransaction * emptyIndexPathTransaction;              //@synthesize emptyIndexPathTransaction=_emptyIndexPathTransaction - In the implementation block
@property (assign,nonatomic) char expectingDropMoveTransactions;                                   //@synthesize expectingDropMoveTransactions=_expectingDropMoveTransactions - In the implementation block
@property (assign,nonatomic) char didAcceptDropMoveTransactions;                                   //@synthesize didAcceptDropMoveTransactions=_didAcceptDropMoveTransactions - In the implementation block
@property (nonatomic,readonly) NSArray * completionBlocks; 
@property (assign,nonatomic) int hint;                                                             //@synthesize hint=_hint - In the implementation block
@property (assign,nonatomic) long long updateCount;                                                //@synthesize updateCount=_updateCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * indexMap;                                            //@synthesize indexMap=_indexMap - In the implementation block
@property (nonatomic,retain) NSArray * allChanges;                                                 //@synthesize allChanges=_allChanges - In the implementation block
@property (nonatomic,retain) NSArray * cellChanges;                                                //@synthesize cellChanges=_cellChanges - In the implementation block
@property (nonatomic,retain) NSArray * supplementaryViewChanges;                                   //@synthesize supplementaryViewChanges=_supplementaryViewChanges - In the implementation block
@property (nonatomic,retain) NSArray * decorationViewChanges;                                      //@synthesize decorationViewChanges=_decorationViewChanges - In the implementation block
@property (nonatomic,retain) NSArray * dragAndDropChanges;                                         //@synthesize dragAndDropChanges=_dragAndDropChanges - In the implementation block
@property (assign,nonatomic) char hasChanges;                                                      //@synthesize hasChanges=_hasChanges - In the implementation block
@property (assign,nonatomic) char areChangesValid;                                                 //@synthesize areChangesValid=_areChangesValid - In the implementation block
@property (nonatomic,retain) NSMutableArray * insertCellTransactions;                              //@synthesize insertCellTransactions=_insertCellTransactions - In the implementation block
@property (nonatomic,retain) NSMutableArray * deleteCellTransactions;                              //@synthesize deleteCellTransactions=_deleteCellTransactions - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateCellTransactions;                              //@synthesize updateCellTransactions=_updateCellTransactions - In the implementation block
@property (nonatomic,retain) NSMutableArray * moveCellTransactions;                                //@synthesize moveCellTransactions=_moveCellTransactions - In the implementation block
@property (nonatomic,retain) NSMutableArray * insertSupplementaryViewTransactions;                 //@synthesize insertSupplementaryViewTransactions=_insertSupplementaryViewTransactions - In the implementation block
@property (nonatomic,retain) NSMutableArray * deleteSupplementaryViewTransactions;                 //@synthesize deleteSupplementaryViewTransactions=_deleteSupplementaryViewTransactions - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateSupplementaryViewTransactions;                 //@synthesize updateSupplementaryViewTransactions=_updateSupplementaryViewTransactions - In the implementation block
@property (nonatomic,retain) NSMutableArray * moveSupplementaryViewTransactions;                   //@synthesize moveSupplementaryViewTransactions=_moveSupplementaryViewTransactions - In the implementation block
@property (assign,getter=isFinished,nonatomic) char finish;                                        //@synthesize finish=_finish - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableCompletionBlocks;                             //@synthesize mutableCompletionBlocks=_mutableCompletionBlocks - In the implementation block
@property (assign,nonatomic) char isDragAndDrop;                                                   //@synthesize isDragAndDrop=_isDragAndDrop - In the implementation block
@property (assign,nonatomic) char isDrop;                                                          //@synthesize isDrop=_isDrop - In the implementation block
+(void)_shiftIndexMap:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 delta:(long long)arg4 ;
+(id)_bareIndexMapWithCount:(unsigned long long)arg1 ;
+(id)updatedIndexMapFromIndexMap:(id)arg1 withInserts:(id)arg2 ;
+(id)updatedIndexMapFromIndexMap:(id)arg1 withDeletes:(id)arg2 ;
+(id)updatedIndexMapFromIndexMap:(id)arg1 withMovesOrDrops:(id)arg2 ;
-(NSArray *)completionBlocks;
-(char)isDragAndDrop;
-(IMCollectionViewTransaction *)emptyIndexPathTransaction;
-(NSMutableArray *)dragCellTransactions;
-(NSMutableArray *)dropCellTransactios;
-(char)expectingDropMoveTransactions;
-(char)dropHasEffectiveMoves;
-(NSMutableArray *)indexMap;
-(NSMutableArray *)mutableCompletionBlocks;
-(void)setMutableCompletionBlocks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)insertCellTransactions;
-(NSMutableArray *)insertSupplementaryViewTransactions;
-(NSMutableArray *)deleteCellTransactions;
-(NSMutableArray *)deleteSupplementaryViewTransactions;
-(NSMutableArray *)moveCellTransactions;
-(NSMutableArray *)moveSupplementaryViewTransactions;
-(NSMutableArray *)updateCellTransactions;
-(NSMutableArray *)updateSupplementaryViewTransactions;
-(void)setAllChanges:(NSArray *)arg1 ;
-(void)setIndexMap:(NSMutableArray *)arg1 ;
-(void)setAreChangesValid:(char)arg1 ;
-(void)_addCellTransaction:(id)arg1 ;
-(void)_addSupplementaryViewTransaction:(id)arg1 ;
-(void)setDragEvent:(NSEvent *)arg1 ;
-(void)addTransaction:(id)arg1 ;
-(void)setDropPoint:(CGPoint)arg1 ;
-(char)_checkFinished:(id*)arg1 ;
-(char)_checkTransactionTypes:(id*)arg1 ;
-(char)_checkBalance:(id*)arg1 ;
-(char)_checkBounds:(id*)arg1 ;
-(char)_checkMovesAreConsistent:(id*)arg1 ;
-(char)_checkDeletesAreConsistent:(id*)arg1 ;
-(char)_checkDeletingAllDraggedItems:(id*)arg1 ;
-(char)_checkCanPerformDragAndDropUpdate:(id*)arg1 ;
-(unsigned long long)sourceNumberOfItems;
-(void)_updateChangesIfNeeded;
-(void)setSourceLayout:(IMCollectionViewLayout *)arg1 ;
-(void)setTargetLayout:(IMCollectionViewLayout *)arg1 ;
-(void)setInsertCellTransactions:(NSMutableArray *)arg1 ;
-(void)setDeleteCellTransactions:(NSMutableArray *)arg1 ;
-(void)setUpdateCellTransactions:(NSMutableArray *)arg1 ;
-(void)setMoveCellTransactions:(NSMutableArray *)arg1 ;
-(void)setIsDragAndDrop:(char)arg1 ;
-(void)setDragCellTransactions:(NSMutableArray *)arg1 ;
-(void)setIsDrop:(char)arg1 ;
-(void)setDropCellTransactios:(NSMutableArray *)arg1 ;
-(void)setInsertSupplementaryViewTransactions:(NSMutableArray *)arg1 ;
-(void)setDeleteSupplementaryViewTransactions:(NSMutableArray *)arg1 ;
-(void)setUpdateSupplementaryViewTransactions:(NSMutableArray *)arg1 ;
-(void)setMoveSupplementaryViewTransactions:(NSMutableArray *)arg1 ;
-(char)areChangesValid;
-(IMCollectionViewLayout *)sourceLayout;
-(NSSet *)sourceVisibleCellIndexPaths;
-(NSDictionary *)sourceVisibleSupplementaryViewIndexPaths;
-(IMCollectionViewLayout *)targetLayout;
-(NSSet *)targetVisibleCellIndexPaths;
-(NSDictionary *)targetVisibleSupplementaryViewIndexPaths;
-(NSSet *)sourceVisibleDecorationViewKinds;
-(NSSet *)targetVisibleDecorationViewKinds;
-(unsigned long long)targetNumberOfItems;
-(char)_checkDragAndDropExclusive:(id*)arg1 ;
-(char)_checkDragAndDropTransactionTypes:(id*)arg1 ;
-(char)_checkDragAndDropBounds:(id*)arg1 ;
-(char)_checkDragTransactionWithNilEvent:(id*)arg1 ;
-(char)_checkDropMovesAreConsistent:(id*)arg1 ;
-(NSEvent *)dragEvent;
-(void)addDragTransactions:(id)arg1 withEvent:(id)arg2 ;
-(void)addDropTransactions:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)setEmptyIndexPathTransaction:(IMCollectionViewTransaction *)arg1 ;
-(char)canPerformUpdate:(id*)arg1 ;
-(NSArray *)cellChanges;
-(NSArray *)supplementaryViewChanges;
-(NSArray *)decorationViewChanges;
-(NSArray *)dragAndDropChanges;
-(void)setLayoutsByInvalidatingLayout:(id)arg1 ;
-(char)matchMovesWithDropTransactions:(id*)arg1 ;
-(void)setSourceNumberOfItems:(unsigned long long)arg1 ;
-(void)setTargetNumberOfItems:(unsigned long long)arg1 ;
-(void)setSourceVisibleCellIndexPaths:(NSSet *)arg1 ;
-(void)setTargetVisibleCellIndexPaths:(NSSet *)arg1 ;
-(void)setSourceVisibleSupplementaryViewIndexPaths:(NSDictionary *)arg1 ;
-(void)setTargetVisibleSupplementaryViewIndexPaths:(NSDictionary *)arg1 ;
-(void)setSourceVisibleDecorationViewKinds:(NSSet *)arg1 ;
-(void)setTargetVisibleDecorationViewKinds:(NSSet *)arg1 ;
-(CGPoint)dropPoint;
-(void)setExpectingDropMoveTransactions:(char)arg1 ;
-(char)didAcceptDropMoveTransactions;
-(void)setDidAcceptDropMoveTransactions:(char)arg1 ;
-(void)setCellChanges:(NSArray *)arg1 ;
-(void)setSupplementaryViewChanges:(NSArray *)arg1 ;
-(void)setDecorationViewChanges:(NSArray *)arg1 ;
-(void)setDragAndDropChanges:(NSArray *)arg1 ;
-(char)isDrop;
-(int)hint;
-(void)setHint:(int)arg1 ;
-(void)setFinish:(char)arg1 ;
-(char)finish;
-(void)setHasChanges:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)beginUpdate;
-(void)endUpdate;
-(NSDate *)timestamp;
-(char)isFinished;
-(char)hasChanges;
-(long long)updateCount;
-(void)setUpdateCount:(long long)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(NSArray *)allChanges;
@end

