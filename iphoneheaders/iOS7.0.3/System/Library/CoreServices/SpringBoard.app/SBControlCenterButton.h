/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:39:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIControlCenterButton.h>

@class NSString, NSNumber;

@interface SBControlCenterButton : SBUIControlCenterButton {

	NSString* _identifier;
	NSNumber* _sortKey;

}

@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSNumber * sortKey;                 //@synthesize sortKey=_sortKey - In the implementation block
-(id)sortKey;
-(void)dealloc;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setSortKey:(id)arg1 ;
@end
