/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SearchBarSearchManagerRequest : NSObject {

	NSString* _searchName;
	int _searchMode;
	int _types;

}

@property (nonatomic,copy) NSString * searchName;              //@synthesize searchName=_searchName - In the implementation block
@property (assign,nonatomic) int searchMode;                   //@synthesize searchMode=_searchMode - In the implementation block
@property (assign,nonatomic) int types;                        //@synthesize types=_types - In the implementation block
-(int)searchMode;
-(id)searchName;
-(void)setSearchName:(id)arg1 ;
-(void)setSearchMode:(int)arg1 ;
-(int)types;
-(void)dealloc;
-(void)setTypes:(int)arg1 ;
@end
