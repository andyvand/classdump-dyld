/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CredentialAndProtectionSpaceCollectionDelegate;
@class NSDictionary, NSMutableArray, NSArray, NSString;

@interface CredentialAndProtectionSpaceCollection : NSObject {

	NSDictionary* _credentialsByProtectionSpace;
	NSMutableArray* _credentialAndProtectionSpacePairs;
	NSMutableArray* _filteredCredentialAndProtectionSpacePairIndexes;
	id<CredentialAndProtectionSpaceCollectionDelegate> _delegate;
	NSArray* _sortDescriptors;
	NSString* _filterString;
	char _ignoreNotifications;

}

@property (assign,nonatomic,__weak) id delegate;                                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                                                             //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,retain) NSString * filterString;                                                               //@synthesize filterString=_filterString - In the implementation block
@property (assign,nonatomic) char ignoreNotifications;                                                              //@synthesize ignoreNotifications=_ignoreNotifications - In the implementation block
@property (getter=credentialAndProtectionSpacePairsCount,nonatomic,readonly) unsigned long long count; 
@property (nonatomic,retain) NSDictionary * credentialsByProtectionSpace;                                           //@synthesize credentialsByProtectionSpace=_credentialsByProtectionSpace - In the implementation block
@property (nonatomic,retain) NSMutableArray * credentialAndProtectionSpacePairs;                                    //@synthesize credentialAndProtectionSpacePairs=_credentialAndProtectionSpacePairs - In the implementation block
@property (nonatomic,retain) NSMutableArray * filteredCredentialAndProtectionSpacePairIndexes;                      //@synthesize filteredCredentialAndProtectionSpacePairIndexes=_filteredCredentialAndProtectionSpacePairIndexes - In the implementation block
-(void)populateCredentials;
-(void)removeAllCredentials;
-(unsigned long long)credentialAndProtectionSpacePairsCount;
-(void)stopMonitoringCredentials;
-(char)shouldFilterCredentialAndProtectionSpacePairs;
-(NSMutableArray *)filteredCredentialAndProtectionSpacePairIndexes;
-(NSMutableArray *)credentialAndProtectionSpacePairs;
-(unsigned long long)possiblyFilteredIndexToRealIndex:(unsigned long long)arg1 ;
-(id)protectionSpaceAtIndex:(unsigned long long)arg1 ;
-(void)_removeCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)setIgnoreNotifications:(char)arg1 ;
-(void)removeCredentialAtIndex:(unsigned long long)arg1 ;
-(void)resetFilteredCredentials;
-(unsigned long long)_realIndexToPossiblyFilteredIndex:(unsigned long long)arg1 ;
-(void)setFilteredCredentialAndProtectionSpacePairIndexes:(NSMutableArray *)arg1 ;
-(void)setCredentialsByProtectionSpace:(NSDictionary *)arg1 ;
-(void)setCredentialAndProtectionSpacePairs:(NSMutableArray *)arg1 ;
-(char)ignoreNotifications;
-(void)resetCredentials;
-(NSDictionary *)credentialsByProtectionSpace;
-(void)credentialsChanged:(id)arg1 ;
-(id)credentialAtIndex:(unsigned long long)arg1 ;
-(id)addressStringForProtectionSpaceAtIndex:(unsigned long long)arg1 ;
-(void)sortAndFilter;
-(id)credentialAndProtectionSpaceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfCredentialAndProtectionSpace:(id)arg1 ;
-(void)startMonitoringCredentials;
-(char)includesPasswordInSortCriteria;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setFilterString:(NSString *)arg1 ;
-(NSString *)filterString;
@end

