/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Shortcut/Shortcut-Structs.h>
#import <Shortcut/NSCoding.h>
#import <Shortcut/HPDQueryDelegate.h>

@class NSMutableArray, NSConditionLock, NSMutableDictionary, NSString;

@interface SCTGRLIndex : NSObject <NSCoding, HPDQueryDelegate> {

	NSMutableArray* mGRLs;
	NSMutableArray* mSubIndices;
	long long mUpdateLevel;
	NSConditionLock* mSearchThreadLock;
	NSConditionLock* mCustomSearchThreadLock;
	unsigned long long mQuerySequenceNumber;
	unsigned long long mSearchLimit;
	char mQueryResultsReceived;
	NSMutableArray* mHelpItemResults;
	NSMutableDictionary* mKeyToLocalizedStringTable;
	NSMutableDictionary* mLocalizedStringToKeysTable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedIndex;
+(id)indexFromURL:(id)arg1 ;
+(unsigned long long)processGRLs:(id)arg1 currentGRL:(unsigned long long)arg2 withTitle:(id)arg3 withCurrentPriority:(float)arg4 pruneList:(id)arg5 ;
+(void)pruneGRLs:(id)arg1 toLimit:(unsigned long long)arg2 results:(id)arg3 ;
+(id)indexFromStorage;
+(id)previouslyIndexedWindows;
-(id)localizedString:(id)arg1 ;
-(void)indexMenuBarDynamically;
-(unsigned long long)findGRLsContainingString:(id)arg1 limitResultsTo:(unsigned long long)arg2 ;
-(id)keysForLocalizedString:(id)arg1 ;
-(void)readLocalizedSearchData;
-(void)writeIndexToStorage;
-(id)urlToWriteIndexToStorage;
-(void)buildLocalizedStringToKeysTable;
-(id)extractStringFromLocalizedStringData:(id)arg1 ;
-(long long)grlCount;
-(void)indexCarbonMenu:(OpaqueMenuRefRef)arg1 withParentMenu:(id)arg2 resultGRLs:(id)arg3 isRootMenu:(char)arg4 systemHelpMenu:(OpaqueMenuRefRef)arg5 withDepth:(long long)arg6 ;
-(void)indexMenuBar:(id)arg1 ;
-(char)isInUpdate;
-(void)analysisDidFinish:(id)arg1 ;
-(void)enumerateSubIndices:(id)arg1 ;
-(id)grls;
-(void)handleHelpQuery:(id)arg1 ;
-(void)helpQuery:(id)arg1 didReturnResults:(id)arg2 ;
-(void)helpQueryDidFinishSearching:(id)arg1 ;
-(char)matchLocalizedString:(id)arg1 forKeys:(id)arg2 ;
-(unsigned long long)searchLimit;
-(void)indexExternalApp:(id)arg1 ;
-(void)analyzeAndIndexApp;
-(void)appendGRLs:(id)arg1 ;
-(void)copyAndReparentGRLs:(id)arg1 forWindow:(id)arg2 forNewParent:(id)arg3 ;
-(id)removeAllGRLs;
-(void)addSubIndex:(id)arg1 ;
-(void)cancelPendingSearch;
-(void)dumpGRLs;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)beginUpdate;
-(void)endUpdate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)allowsKeyedCoding;
@end
