/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectors/DataDetectors-Structs.h>
#import <DataDetectors/NSCopying.h>
#import <DataDetectors/NSSecureCoding.h>

@class NSString, NSDate, NSURL, NSArray;

@interface DDActionContext : NSObject <NSCopying, NSSecureCoding> {

	CGRect _highlightFrame;
	CGRect _aimFrame;
	NSString* _eventTitle;
	NSDate* _referenceDate;
	NSString* _authorABUUID;
	NSString* _authorEmailAddress;
	NSString* _authorName;
	NSURL* _url;
	NSString* _matchedString;
	NSArray* _allResults;
	NSString* _selectionString;
	_DDResult* _mainResult;
	char _immediate;
	char _isRightClick;
	/*^block*/id _interactionStartedHandler;
	/*^block*/id _interactionChangedHandler;
	/*^block*/id _interactionStoppedHandler;
	id _transientObject;
	char _altMenuMode;
	char _skipAnimation;
	NSArray* _allowedActionUTIs;
	NSArray* _disallowedActionUTIs;
	xpc_connection_sRef _peerConnection;
	char _altMode;

}

@property (assign) CGRect highlightFrame;                     //@synthesize highlightFrame=_highlightFrame - In the implementation block
@property (assign) CGRect aimFrame;                           //@synthesize aimFrame=_aimFrame - In the implementation block
@property (copy) NSString * eventTitle;                       //@synthesize eventTitle=_eventTitle - In the implementation block
@property (copy) NSDate * referenceDate;                      //@synthesize referenceDate=_referenceDate - In the implementation block
@property (copy) NSString * authorUUID;                       //@synthesize authorABUUID=_authorABUUID - In the implementation block
@property (copy) NSString * authorEmailAddress;               //@synthesize authorEmailAddress=_authorEmailAddress - In the implementation block
@property (copy) NSString * authorName;                       //@synthesize authorName=_authorName - In the implementation block
@property (copy) NSURL * URL;                                 //@synthesize url=_url - In the implementation block
@property (copy) NSString * matchedString;                    //@synthesize matchedString=_matchedString - In the implementation block
@property (retain) NSArray * allResults;                      //@synthesize allResults=_allResults - In the implementation block
@property (copy) NSString * selectionString;                  //@synthesize selectionString=_selectionString - In the implementation block
@property (retain) _DDResult* mainResult;                     //@synthesize mainResult=_mainResult - In the implementation block
@property (assign) char immediate;                            //@synthesize immediate=_immediate - In the implementation block
@property (assign) char isRightClick;                         //@synthesize isRightClick=_isRightClick - In the implementation block
@property (copy) id interactionStartedHandler;                //@synthesize interactionStartedHandler=_interactionStartedHandler - In the implementation block
@property (copy) id interactionChangedHandler;                //@synthesize interactionChangedHandler=_interactionChangedHandler - In the implementation block
@property (copy) id interactionStoppedHandler;                //@synthesize interactionStoppedHandler=_interactionStoppedHandler - In the implementation block
@property (copy) NSArray * allowedActionUTIs;                 //@synthesize allowedActionUTIs=_allowedActionUTIs - In the implementation block
@property (copy) NSArray * disallowedActionUTIs;              //@synthesize disallowedActionUTIs=_disallowedActionUTIs - In the implementation block
@property (retain) id transientObject;                        //@synthesize transientObject=_transientObject - In the implementation block
@property (copy) id completionHandler; 
@property (assign) char altMode;                              //@synthesize altMode=_altMode - In the implementation block
@property (assign) char skipAnimation;                        //@synthesize skipAnimation=_skipAnimation - In the implementation block
+(id)contextFromDictionary:(id)arg1 ;
+(char)supportsSecureCoding;
-(char)altMode;
-(NSArray *)allowedActionUTIs;
-(NSArray *)disallowedActionUTIs;
-(CGRect)highlightFrame;
-(CGRect)aimFrame;
-(void)setMatchedString:(NSString *)arg1 ;
-(id)interactionStartedHandler;
-(id)interactionStoppedHandler;
-(id)interactionChangedHandler;
-(void)setAimFrame:(CGRect)arg1 ;
-(void)setPeerConnection:(xpc_connection_sRef)arg1 ;
-(xpc_connection_sRef)peerConnection;
-(char)skipAnimation;
-(void)setInteractionStoppedHandler:(id)arg1 ;
-(void)setAuthorUUID:(NSString *)arg1 ;
-(void)setAuthorName:(NSString *)arg1 ;
-(void)setAuthorEmailAddress:(NSString *)arg1 ;
-(NSString *)authorUUID;
-(NSString *)authorName;
-(NSString *)authorEmailAddress;
-(NSString *)selectionString;
-(void)setInteractionStartedHandler:(id)arg1 ;
-(void)setInteractionChangedHandler:(id)arg1 ;
-(id)transientObject;
-(void)setTransientObject:(id)arg1 ;
-(char)immediate;
-(char)isRightClick;
-(void)setIsRightClick:(char)arg1 ;
-(void)setSkipAnimation:(char)arg1 ;
-(void)setAllowedActionUTIs:(NSArray *)arg1 ;
-(void)setDisallowedActionUTIs:(NSArray *)arg1 ;
-(void)augmentContextWithDictionary:(id)arg1 ;
-(void)setSelectionString:(NSString *)arg1 ;
-(void)setAllResults:(NSArray *)arg1 ;
-(void)setMainResult:(_DDResult*)arg1 ;
-(void)setAltMode:(char)arg1 ;
-(_DDResult*)mainResult;
-(id)contextForView:(id)arg1 altMode:(char)arg2 interactionStartedHandler:(/*^block*/id)arg3 interactionChangedHandler:(/*^block*/id)arg4 interactionStoppedHandler:(/*^block*/id)arg5 ;
-(void)setHighlightFrame:(CGRect)arg1 ;
-(void)setImmediate:(char)arg1 ;
-(NSDate *)referenceDate;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(NSString *)matchedString;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)eventTitle;
-(void)setEventTitle:(NSString *)arg1 ;
-(NSArray *)allResults;
@end

