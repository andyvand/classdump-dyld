/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/THPageLayout.h>
#import <iBAReaderKit/TSWPStyleProvider.h>
#import <iBAReaderKit/TSWPLayoutOwner.h>

@class TSWPLayoutManager, NSTimer, NSArray, THModelBodyTextInfo, NSString;

@interface THFlowPageLayout : THPageLayout <TSWPStyleProvider, TSWPLayoutOwner> {

	TSWPLayoutManager* mLayoutManager;
	NSTimer* mLayoutTimer;
	NSArray* mSortedGutterDrawables;
	unsigned long long mFirstBodyIndexNeedingGutterLayout;

}

@property (nonatomic,readonly) THModelBodyTextInfo * bodyInfo; 
@property (nonatomic,readonly) double spaceBeforeBody; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)caresAboutStorageChanges;
-(void)layoutManagerNeedsLayout:(id)arg1 ;
-(id)lineHintsForTarget:(id)arg1 ;
-(void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3 ;
-(id)textWrapper;
-(char)invalidateOnExactTextRangeLayout;
-(void)canvasDidScroll;
-(double)spaceBeforeBody;
-(void)p_layoutNextBodyLayout;
-(id)sortedGutterDrawables;
-(void)p_placeGutterDrawableLayout:(id)arg1 withPositioning:(id)arg2 inColumn:(id)arg3 inBody:(id)arg4 ;
-(id)gutterDrawableStorage;
-(CGRect)bodyRectForChildLayout:(id)arg1 ;
-(void)wasAddedToLayoutController:(id)arg1 ;
-(void)willBeRemovedFromLayoutController:(id)arg1 ;
-(char)wantsNormalBodyLayouts;
-(Class)repClassOverride;
-(void)p_layoutBodyLayout:(id)arg1 ;
-(void)p_layoutGutterDrawables;
-(void)p_layoutContentUpwardFromBodyIndex:(unsigned long long)arg1 amount:(double*)arg2 ;
-(void)p_layoutContentDownwardFromBodyIndex:(unsigned long long)arg1 amount:(double*)arg2 ;
-(CGPoint)originOfCharacterIndex:(unsigned long long)arg1 ;
-(void)layoutContentAtBodyIndex:(unsigned long long)arg1 offsetFromTop:(double)arg2 padAbove:(double*)arg3 padBelow:(double*)arg4 ;
-(void)layoutContentFromBottom:(double*)arg1 ;
-(void)layoutContentFromTop:(double*)arg1 ;
-(NSRange)firstLineInRect:(CGRect)arg1 fromCharIndex:(unsigned long long)arg2 ;
-(id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)computeLayoutGeometry;
-(id)additionalDependenciesForChildLayout:(id)arg1 ;
-(id)dependentLayouts;
-(THModelBodyTextInfo *)bodyInfo;
-(id)styleProvider;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(void)validate;
@end
