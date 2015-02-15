/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/TSDContainerInfo.h>

@protocol THPageController;
@class NSArray, THModelPageInfo, THModelContentNode, NSString, TSDInfoGeometry;

@interface THSectionInfo : NSObject <TSDContainerInfo> {

	id<THPageController> mPageController;
	NSArray* mPages;
	char mAnchorAtOrigin;
	THModelPageInfo* _lastPage;

}

@property (nonatomic,copy) NSArray * pages; 
@property (nonatomic,copy) THModelPageInfo * lastPage;                                                 //@synthesize lastPage=_lastPage - In the implementation block
@property (nonatomic,retain) id<THPageController> pageController; 
@property (nonatomic,readonly) THModelContentNode * contentNode; 
@property (assign,nonatomic) char anchorAtOrigin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char matchesObjectPlaceholderGeometry; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDContainerInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) char floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) char anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) char inlineWithText; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) char attachedToBodyText; 
-(void)setParentInfo:(NSObject*<TSDContainerInfo>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(char)isFloatingAboveText;
-(char)isAnchoredToText;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(id)childCommandForReplaceAllCommand:(id)arg1 ;
-(char)isThemeContent;
-(id)copyWithContext:(id)arg1 ;
-(char)anchorAtOrigin;
-(Class)repClass;
-(id<THPageController>)pageController;
-(id)childInfos;
-(THModelContentNode *)contentNode;
-(void)setPageController:(id<THPageController>)arg1 ;
-(char)isInlineWithText;
-(void)setAnchorAtOrigin:(char)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(char)isAttachedToBodyText;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(void)setPages:(NSArray *)arg1 ;
-(NSObject*<TSDContainerInfo>)parentInfo;
-(void)setLastPage:(THModelPageInfo *)arg1 ;
-(id)childEnumerator;
-(void)dealloc;
-(NSString *)description;
-(NSArray *)pages;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(TSDInfoGeometry *)geometry;
-(THModelPageInfo *)lastPage;
-(Class)layoutClass;
@end
