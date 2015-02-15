/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:30:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Dictionary.app/Contents/MacOS/Dictionary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface DictionaryHistoryItem : NSObject {

	NSMutableDictionary* _contents;
	NSString* _linkSourceID;

}

@property (nonatomic,copy) NSString * linkSourceID;              //@synthesize linkSourceID=_linkSourceID - In the implementation block
+(id)historyItem;
-(void)setLinkSourceID:(NSString *)arg1 ;
-(NSString *)linkSourceID;
-(void)replaceContentsWithItem:(id)arg1 ;
-(char)isEmptyItem;
-(id)_contentDictionary;
-(id)serializedData;
-(void)dealloc;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(char)boolForKey:(id)arg1 ;
-(double)floatForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setBool:(char)arg1 forKey:(id)arg2 ;
-(void)setFloat:(double)arg1 forKey:(id)arg2 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
@end
