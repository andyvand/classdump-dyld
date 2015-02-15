/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol ABSearchOperationDelegate, CNDirectoryResultBuilder;
@class PHXSource, NSArray, NSString, ABAddressBook;

@interface ABSearchOperation : NSOperation {

	PHXSource* source;
	NSArray* terms;
	NSString* originalTerm;
	ABAddressBook* _addressBook;
	id<ABSearchOperationDelegate> delegate;
	/*^block*/id _completionHandler;
	int phase;
	char shouldSearchLocal;
	char shouldSearchServer;
	char shouldReturnDistributionLists;
	char shouldReturnFullContactData;
	int resultType;
	NSArray* prefixFields;
	id<CNDirectoryResultBuilder> _resultBuilderPrototype;

}

@property (retain) id<CNDirectoryResultBuilder> resultBuilderPrototype;              //@synthesize resultBuilderPrototype=_resultBuilderPrototype - In the implementation block
@property (nonatomic,retain) PHXSource * source; 
@property (nonatomic,copy) NSArray * terms; 
@property (nonatomic,copy) NSString * originalTerm; 
@property (nonatomic,retain) id<ABSearchOperationDelegate> delegate; 
@property (nonatomic,copy) id completionHandler;                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) ABAddressBook * addressBook;                            //@synthesize addressBook=_addressBook - In the implementation block
@property (assign,nonatomic) int phase; 
@property (assign,nonatomic) char shouldSearchLocal; 
@property (assign,nonatomic) char shouldSearchServer; 
@property (assign,nonatomic) char shouldReturnDistributionLists; 
@property (assign,nonatomic) char shouldReturnFullContactData; 
@property (assign,nonatomic) int resultType; 
@property (nonatomic,retain) NSArray * prefixFields; 
+(char)_resultRecord:(id)arg1 matchesSearchOperation:(id)arg2 ;
-(ABAddressBook *)addressBook;
-(void)_doMain;
-(void)setShouldSearchServer:(char)arg1 ;
-(void)setTerms:(NSArray *)arg1 ;
-(void)setOriginalTerm:(NSString *)arg1 ;
-(char)shouldSearchLocal;
-(id)cachedMatches;
-(void)reportRecords:(id)arg1 ;
-(char)shouldSearchServer;
-(id)searchMatches;
-(NSArray *)prefixFields;
-(NSArray *)terms;
-(NSString *)originalTerm;
-(char)shouldReturnFullContactData;
-(id<CNDirectoryResultBuilder>)resultBuilderPrototype;
-(void)setResultBuilderPrototype:(id<CNDirectoryResultBuilder>)arg1 ;
-(id)init;
-(void)setDelegate:(id<ABSearchOperationDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<ABSearchOperationDelegate>)delegate;
-(int)phase;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(PHXSource *)source;
-(void)setSource:(PHXSource *)arg1 ;
-(void)setResultType:(int)arg1 ;
-(int)resultType;
-(void)main;
-(void)setPhase:(int)arg1 ;
-(void)setAddressBook:(ABAddressBook *)arg1 ;
-(void)setShouldReturnDistributionLists:(char)arg1 ;
-(void)setShouldSearchLocal:(char)arg1 ;
-(void)setShouldReturnFullContactData:(char)arg1 ;
-(char)shouldReturnDistributionLists;
-(void)setPrefixFields:(NSArray *)arg1 ;
@end

