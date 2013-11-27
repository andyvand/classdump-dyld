/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/CompletionItem.h>

@class NSString, WBSURLCompletionMatch;

@interface URLCompletionItem : NSObject <CompletionItem> {

	BOOL _topHit;
	NSString* _title;
	NSString* _address;
	WBSURLCompletionMatch* _match;

}

@property (nonatomic,readonly) WBSURLCompletionMatch * match;                          //@synthesize match=_match - In the implementation block
@property (nonatomic,readonly) NSString * address;                                     //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (getter=isTopHit,nonatomic,readonly) BOOL topHit;                            //@synthesize topHit=_topHit - In the implementation block
@property (nonatomic,readonly) float completionTableViewCellCustomHeight; 
-(id)completionTableViewCellReuseIdentifier;
-(id)completionTableViewCell;
-(void)configureCompletionTableViewCell:(id)arg1 ;
-(void)auditAcceptedCompletionWithRank:(unsigned)arg1 ;
-(void)acceptCompletionWithSearchAction:(/*^block*/ id)arg1 goToURLAction:(/*^block*/ id)arg2 findOnPageAction:(/*^block*/ id)arg3 ;
-(float)completionTableViewCellCustomHeight;
-(id)initWithMatch:(id)arg1 topHit:(BOOL)arg2 ;
-(BOOL)isTopHit;
-(id)initWithMatch:(id)arg1 ;
-(id)match;
-(void)dealloc;
-(id)description;
-(id)title;
-(id)address;
@end
