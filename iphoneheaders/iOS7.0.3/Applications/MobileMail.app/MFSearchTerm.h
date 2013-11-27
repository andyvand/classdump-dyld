/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData;

@interface MFSearchTerm : NSObject {

	NSString* _token;
	NSData* _sortKey;

}

@property (nonatomic,readonly) NSString * token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSData * sortKey;              //@synthesize sortKey=_sortKey - In the implementation block
-(id)initWithToken:(id)arg1 sortKey:(id)arg2 ;
-(BOOL)isPrefixOfSortKey:(id)arg1 ;
-(id)sortKey;
-(void)dealloc;
-(id)description;
-(id)token;
@end
