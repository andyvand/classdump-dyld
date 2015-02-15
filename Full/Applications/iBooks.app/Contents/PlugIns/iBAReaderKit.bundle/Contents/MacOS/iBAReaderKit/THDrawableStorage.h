/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/TSPObject.h>
#import <iBAReaderKit/TSKDocumentObject.h>

@class THDocumentRoot, NSMutableArray, NSMutableDictionary, NSArray;

@interface THDrawableStorage : TSPObject <TSKDocumentObject> {

	THDocumentRoot* mDocumentRoot;
	NSMutableArray* mDrawables;
	NSMutableDictionary* mDrawableTags;

}

@property (nonatomic,readonly) unsigned long long drawableCount; 
@property (nonatomic,readonly) NSArray * drawables; 
@property (assign,nonatomic) THDocumentRoot * documentRoot; 
-(NSArray *)drawables;
-(void)addDrawable:(id)arg1 insertContext:(id)arg2 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(char)containsDrawable:(id)arg1 ;
-(id)drawableWithTag:(id)arg1 ;
-(void)checkDebug;
-(char)isInDocumentRoot:(id)arg1 ;
-(void)setTag:(id)arg1 forDrawable:(id)arg2 ;
-(unsigned long long)drawableCount;
-(THDocumentRoot *)documentRoot;
-(void)setDocumentRoot:(THDocumentRoot *)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
@end
