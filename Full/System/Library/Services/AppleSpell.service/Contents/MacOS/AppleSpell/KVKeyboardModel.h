/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 11:20:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Services/AppleSpell.service/Contents/MacOS/AppleSpell
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppleSpell/AppleSpell-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface KVKeyboardModel : NSObject {

	CGSize size;
	NSMutableArray* keys;
	NSMutableDictionary* keyMapping;
	NSMutableArray* changedKeys;
	double _minX;
	double _minY;
	double _totalKeyWidth;
	double _totalKeyHeight;

}

@property (readonly) CGSize size; 
@property (retain) NSMutableArray * keys; 
@property (retain) NSMutableArray * changedKeys; 
-(id)_keyForCode:(short)arg1 ;
-(void)adjustKeysForMinimum;
-(double)mediumHeight;
-(void)addKey:(id)arg1 ;
-(void)setKeys:(NSMutableArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(CGSize)size;
-(NSMutableArray *)keys;
-(NSMutableArray *)changedKeys;
-(void)setChangedKeys:(NSMutableArray *)arg1 ;
@end
