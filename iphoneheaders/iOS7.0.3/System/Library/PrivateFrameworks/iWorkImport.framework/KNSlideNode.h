/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSKDocumentObject.h>
#import <iWorkImport/TSKModel.h>
#import <iWorkImport/TSKSearchTarget.h>
#import <iWorkImport/TSCEResolverContainer.h>

@class TSPLazyReference, NSArray, NSMutableDictionary, NSString, KNAbstractSlide, NSDictionary;

@interface KNSlideNode : TSPObject <TSKDocumentObject, TSKModel, TSKSearchTarget, TSCEResolverContainer> {

	TSPLazyReference* mSlideReference;
	NSArray* mChildren;
	KNSlideNode* mParent;
	NSMutableDictionary* mThumbnails;
	BOOL mThumbnailsAreDirty;
	BOOL mIsHidden;
	BOOL mIsCollapsed;
	BOOL mIsCollapsedInOutlineView;
	BOOL mHasBodyInOutlineView;
	BOOL mHasTransition;
	BOOL mHasNote;
	BOOL mSlideNumberVisible;
	unsigned mSlideSpecificHyperlinksCount;
	NSString* mClassicUniqueID;
	NSString* mUniqueIdentifier;
	NSString* mCopiedFromSlideIdentifier;
	unsigned mEventCount;
	unsigned mTableNameCounter;

}

@property (nonatomic,retain) KNAbstractSlide * slide; 
@property (nonatomic,readonly) BOOL hasChildren; 
@property (nonatomic,retain) NSArray * children; 
@property (assign,nonatomic) KNSlideNode * parent; 
@property (nonatomic,readonly) NSDictionary * thumbnails; 
@property (assign,nonatomic) BOOL thumbnailsAreDirty; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed; 
@property (assign,getter=isCollapsedInOutlineView,nonatomic) BOOL collapsedInOutlineView; 
@property (assign,nonatomic) BOOL hasBodyInOutlineView; 
@property (assign,nonatomic) BOOL hasTransition; 
@property (assign,nonatomic) BOOL hasNote; 
@property (assign,nonatomic) BOOL isSlideNumberVisible; 
@property (assign,nonatomic) unsigned slideSpecificHyperlinksCount; 
@property (nonatomic,readonly) BOOL hasBuilds; 
@property (nonatomic,readonly) unsigned eventCount; 
@property (assign,nonatomic) NSString * classicUniqueID; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,retain) NSString * copiedFromSlideIdentifier; 
@property (nonatomic,readonly) KNSlideNode * next; 
@property (nonatomic,readonly) KNSlideNode * previous; 
@property (nonatomic,readonly) KNSlideNode * nextSkippingCollapsed; 
@property (nonatomic,readonly) KNSlideNode * previousSkippingCollapsed; 
@property (nonatomic,readonly) KNSlideNode * nextSkippingHidden; 
@property (nonatomic,readonly) KNSlideNode * previousSkippingHidden; 
+(id)parentSlideNodeForInfo:(id)arg1 ;
+(id)lastSlideUnderSlideNode:(id)arg1 ;
+(id)nodesAndDescendantsForNodes:(id)arg1 includeSkippedSlideNodes:(BOOL)arg2 includingCollapsedSlideNodes:(BOOL)arg3 ;
+(id)p_nextAfterSlideNode:(id)arg1 ;
+(id)p_previousToSlideNode:(id)arg1 ;
+(id)slideNodeForSelectionModel:(id)arg1 withSelection:(id)arg2 ;
+(id)nodesAndDescendantsForNodes:(id)arg1 ;
-(unsigned)eventCount;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(SlideNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)resolverMatchingName:(id)arg1 ;
-(void)loadFromArchive:(const SlideNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(id)childSearchTargets;
-(BOOL)resolverNameIsUsed:(id)arg1 ;
-(unsigned)nextUntitledResolverIndex;
-(id)resolversMatchingPrefix:(id)arg1 ;
-(BOOL)isSlideNumberVisible;
-(void)setSlide:(id)arg1 ;
-(void)updateEventCount;
-(void)setIsSlideNumberVisible:(BOOL)arg1 ;
-(unsigned)slideSpecificHyperlinksCount;
-(void)setSlideSpecificHyperlinksCount:(unsigned)arg1 ;
-(id)descendantsIncludingSkippedSlideNodes:(BOOL)arg1 includingCollapsedSlideNodes:(BOOL)arg2 ;
-(void)p_setEventCount:(unsigned)arg1 ;
-(void)didLoadSlide:(id)arg1 ;
-(void)p_addDescendantsToArray:(id)arg1 includeSkippedSlideNodes:(BOOL)arg2 includeCollapsedSlideNodes:(BOOL)arg3 ;
-(void)generateNewUniqueIdentifier;
-(BOOL)thumbnailsAreDirty;
-(void)setThumbnailsAreDirty:(BOOL)arg1 ;
-(BOOL)isCollapsedInOutlineView;
-(void)setCollapsedInOutlineView:(BOOL)arg1 ;
-(BOOL)hasBodyInOutlineView;
-(void)setHasBodyInOutlineView:(BOOL)arg1 ;
-(void)setHasTransition:(BOOL)arg1 ;
-(BOOL)hasNote;
-(void)setHasNote:(BOOL)arg1 ;
-(id)classicUniqueID;
-(void)setClassicUniqueID:(id)arg1 ;
-(id)copiedFromSlideIdentifier;
-(void)setCopiedFromSlideIdentifier:(id)arg1 ;
-(id)nextSkippingCollapsed;
-(id)previousSkippingCollapsed;
-(id)nextSkippingHidden;
-(id)previousSkippingHidden;
-(BOOL)hasBuilds;
-(void)uniquifyTableNamesForUpgradeOrImport;
-(void)addThumbnail:(id)arg1 atSize:(CGSize)arg2 ;
-(void)removeThumbnailAtSize:(CGSize)arg1 ;
-(void)removeAllThumbnails;
-(id)descendants;
-(id)copyForPasteboard:(id)arg1 ;
-(void)revert;
-(void)dealloc;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)uniqueIdentifier;
-(void)setCollapsed:(BOOL)arg1 ;
-(BOOL)isCollapsed;
-(void)setChildren:(id)arg1 ;
-(BOOL)hasChildren;
-(id)childEnumerator;
-(unsigned)depth;
-(id)slide;
-(id)next;
-(void)p_commonInit;
-(id)thumbnails;
-(id)previous;
-(id)children;
-(void)setParent:(id)arg1 ;
-(id)parent;
-(BOOL)hasTransition;
@end
