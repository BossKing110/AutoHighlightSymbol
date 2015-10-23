//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTFoldingLayoutManager.h"

@class DVTMapTable, DVTMutableRangeArray, DVTObservingToken, DVTPointerArray, NSArray, NSColor, NSMutableArray, NSMutableSet, NSSet, NSString, NSTimer;

@interface DVTLayoutManager : DVTFoldingLayoutManager
{
	NSArray *_temporaryLinkRanges;
	NSMutableArray *_annotations;
	DVTPointerArray *_lastDeletedAnnotations;
	DVTMapTable *_messageBubblesForAnnotations;
	NSMutableSet *_accessoryAnnotations;
	NSArray *_sortedAccessoryAnnotations;
	NSTimer *_autoHighlightTokenTimer;
	DVTObservingToken *_autoHighlightTextCompletionObserver;
	DVTMutableRangeArray *_autoHighlightTokenRanges;
	DVTMutableRangeArray *_tokenizedEditingTokenRanges;
	unsigned long long _tokenizedEditingEditedTokenIndex;
	unsigned long long _tokenizedEditingDeferedOffset;
	struct _NSRange _tokenizedEditingSelectionRange;
	NSColor *_tokenizedEditingTokenBorderColor;
	NSColor *_tokenizedEditingTokenBackgroundColor;
	NSColor *_tokenizedEditingSelectedTokenBorderColor;
	NSColor *_tokenizedEditingSelectedTokenBackgroundColor;
	BOOL _tokenizedEditingEnabled;
}

+ (Class)_dvtDefaultTypesetterClass;
+ (void)initialize;
@property(copy) NSColor *tokenizedEditingSelectedTokenBackgroundColor; // @synthesize tokenizedEditingSelectedTokenBackgroundColor=_tokenizedEditingSelectedTokenBackgroundColor;
@property(copy) NSColor *tokenizedEditingSelectedTokenBorderColor; // @synthesize tokenizedEditingSelectedTokenBorderColor=_tokenizedEditingSelectedTokenBorderColor;
@property(copy) NSColor *tokenizedEditingTokenBackgroundColor; // @synthesize tokenizedEditingTokenBackgroundColor=_tokenizedEditingTokenBackgroundColor;
@property(copy) NSColor *tokenizedEditingTokenBorderColor; // @synthesize tokenizedEditingTokenBorderColor=_tokenizedEditingTokenBorderColor;
@property struct _NSRange tokenizedEditingSelectionRange; // @synthesize tokenizedEditingSelectionRange=_tokenizedEditingSelectionRange;
@property(readonly, copy) NSArray *tokenizedEditingTokenRanges; // @synthesize tokenizedEditingTokenRanges=_tokenizedEditingTokenRanges;
@property(readonly, copy) NSArray *autoHighlightTokenRanges; // @synthesize autoHighlightTokenRanges=_autoHighlightTokenRanges;
@property(readonly) NSSet *accessoryAnnotations; // @synthesize accessoryAnnotations=_accessoryAnnotations;
@property(readonly) NSArray *annotations; // @synthesize annotations=_annotations;
@property(retain) NSArray *temporaryLinkRanges; // @synthesize temporaryLinkRanges=_temporaryLinkRanges;
- (struct _NSRange)rangeForCharacterRange:(struct _NSRange)arg1 withContextLines:(long long)arg2 proposedHeight:(double *)arg3 contentLines:(unsigned long long *)arg4 totalLines:(unsigned long long *)arg5;
- (void)drawUnderlineForGlyphRange:(struct _NSRange)arg1 underlineType:(long long)arg2 baselineOffset:(double)arg3 lineFragmentRect:(struct CGRect)arg4 lineFragmentGlyphRange:(struct _NSRange)arg5 containerOrigin:(struct CGPoint)arg6;
- (void)drawBackgroundForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)fillBackgroundRectArray:(struct CGRect *)arg1 count:(unsigned long long)arg2 forCharacterRange:(struct _NSRange)arg3 color:(id)arg4;
- (void)textStorage:(id)arg1 didUpdateLineRange:(struct _NSRange)arg2 changeInLength:(long long)arg3 replacedCharacterRangeEndsOnLineTerminator:(BOOL)arg4 entireFirstLineReplaced:(BOOL)arg5;
- (void)textStorageDidEndEditing:(id)arg1;
- (void)textStorage:(id)arg1 didEndEditRange:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)textStorage:(id)arg1 willEndEditRange:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)textStorage:(id)arg1 didReplaceCharactersInRange:(struct _NSRange)arg2 withString:(id)arg3 changeInLength:(long long)arg4;
- (void)textStorage:(id)arg1 willReplaceCharactersInRange:(struct _NSRange)arg2 withString:(id)arg3 changeInLength:(long long)arg4;
- (void)foldingManager:(id)arg1 didUnfoldRange:(struct _NSRange)arg2;
- (void)foldingManager:(id)arg1 didFoldRange:(struct _NSRange)arg2;
- (void)didRemoveAnnotations:(id)arg1;
- (void)didInsertAnnotations:(id)arg1;
- (void)drawTokensForGlyphRange:(struct _NSRange)arg1 border:(BOOL)arg2 background:(BOOL)arg3;
- (id)tokenizedEditingTokenPathsForCharacterRange:(struct _NSRange)arg1 displayOnly:(BOOL)arg2;
- (void)updateTokenizedEditingTokenRanges;
- (unsigned long long)indexOfTokenizedEditingTokenRange:(struct _NSRange)arg1;
@property(getter=isTokenizedEditingEnabled) BOOL tokenizedEditingEnabled; // @synthesize tokenizedEditingEnabled=_tokenizedEditingEnabled;
- (void)scheduleAutoHighlightTokenWithTextView:(id)arg1;
- (void)_autoHighlightTokenWithTimer:(id)arg1;
//- (void)_clearAutoHighlightTokens;
//- (void)_displayAutoHighlightTokens;
@property(getter=isAutoHighlightTokensEnabled) BOOL autoHighlightTokensEnabled;
- (void)hideMessageBubblesInRange:(struct _NSRange)arg1;
- (void)showMessageBubblesInRange:(struct _NSRange)arg1;
@property(getter=isAnnotationAdjustmentEnabled) BOOL annotationAdjustmentEnabled;
@property(nonatomic) BOOL severeBubbleAnnotationsMiniaturized;
- (id)messageBubbleViewForAnnotation:(id)arg1;
- (id)accessoryAnnotationsInRange:(struct _NSRange)arg1;
- (void)messageBubbleAnnotation:(id)arg1 needsBubble:(BOOL)arg2;
- (void)removeAnnotationsInRange:(struct _NSRange)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)_removeAnnotationsAtIndexes:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (id)annotationsInRange:(struct _NSRange)arg1;
- (void)mergeAnnotationsAtParagraphIndex:(unsigned long long)arg1;
- (id)annotationIndexesInParagraphRange:(struct _NSRange)arg1 suggestedIndex:(unsigned long long *)arg2;
- (void)_removeBubbleViewFromAnnotation:(id)arg1;
- (void)_addBubbleViewToAnnotation:(id)arg1 annotationsInRange:(id)arg2;
- (void)_assertAnnotationIntegrity;
- (void)_updateMessageBubbleVisibilityForAnnotation:(id)arg1;
@property BOOL temporaryLinkIsAlternate;
- (void)clearTemporaryLinkRanges;
- (void)setTemporaryLinkRanges:(id)arg1 isAlternate:(BOOL)arg2;
- (void)invalidateDisplayForCharacterRange:(struct _NSRange)arg1;
- (void)_invalidateLayoutForMessageBubblesInCharacterRange:(struct _NSRange)arg1;
- (unsigned long long)layoutOptions;
- (void)setDelegate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_layoutManagerCommonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

