/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, DOMHTMLFormElement, DOMFileList, NSURL;

@interface DOMHTMLInputElement : DOMHTMLElement  {
}

@property(copy) NSString * accept;
@property(copy) NSString * alt;
@property BOOL autofocus;
@property BOOL defaultChecked;
@property BOOL checked;
@property BOOL disabled;
@property(readonly) DOMHTMLFormElement * form;
@property(readonly) DOMFileList * files;
@property BOOL indeterminate;
@property int maxLength;
@property BOOL multiple;
@property(copy) NSString * name;
@property BOOL readOnly;
@property(copy) NSString * size;
@property(copy) NSString * src;
@property(copy) NSString * type;
@property(copy) NSString * defaultValue;
@property(copy) NSString * value;
@property(readonly) BOOL willValidate;
@property int selectionStart;
@property int selectionEnd;
@property(copy) NSString * align;
@property(copy) NSString * useMap;
@property(copy) NSString * accessKey;
@property(readonly) NSString * altDisplayString;
@property(readonly) NSURL * absoluteImageURL;


- (void)setName:(id)arg1;
- (id)name;
- (id)type;
- (void)setDefaultValue:(id)arg1;
- (id)defaultValue;
- (void)setHeight:(unsigned int)arg1;
- (unsigned int)height;
- (int)structuralComplexityContribution;
- (BOOL)_isEdited;
- (void)_setAutofilled:(BOOL)arg1;
- (id)autocomplete;
- (void)select;
- (BOOL)readOnly;
- (id)absoluteImageURL;
- (BOOL)_isTextField;
- (BOOL)autocorrect;
- (int)_autocapitalizeType;
- (id)form;
- (double)valueAsNumber;
- (void)setValueWithChangeEvent:(id)arg1;
- (void)setValueAsNumberWithChangeEvent:(double)arg1;
- (BOOL)multiple;
- (void)setDisabled:(BOOL)arg1;
- (BOOL)disabled;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)width;
- (void)setType:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setChecked:(BOOL)arg1;
- (id)size;
- (void)setValueForUser:(id)arg1;
- (void)setSelectionRange:(int)arg1 end:(int)arg2;
- (void)stepDown:(int)arg1;
- (void)stepUp:(int)arg1;
- (void)setIncremental:(BOOL)arg1;
- (BOOL)incremental;
- (void)setSelectionDirection:(id)arg1;
- (id)selectionDirection;
- (void)setSelectionEnd:(int)arg1;
- (int)selectionEnd;
- (void)setSelectionStart:(int)arg1;
- (int)selectionStart;
- (void)setValueAsNumber:(double)arg1;
- (void)setValueAsDate:(double)arg1;
- (double)valueAsDate;
- (void)setStep:(id)arg1;
- (id)step;
- (void)setRequired:(BOOL)arg1;
- (BOOL)required;
- (void)setReadOnly:(BOOL)arg1;
- (void)setPattern:(id)arg1;
- (id)pattern;
- (void)setMultiple:(BOOL)arg1;
- (void)setMin:(id)arg1;
- (id)min;
- (void)setMaxLength:(int)arg1;
- (int)maxLength;
- (void)setMax:(id)arg1;
- (id)max;
- (void)setIndeterminate:(BOOL)arg1;
- (BOOL)indeterminate;
- (id)files;
- (void)setDirName:(id)arg1;
- (id)dirName;
- (BOOL)checked;
- (void)setDefaultChecked:(BOOL)arg1;
- (BOOL)defaultChecked;
- (void)setAccept:(id)arg1;
- (id)accept;
- (id)altDisplayString;
- (void)setUseMap:(id)arg1;
- (id)useMap;
- (void)setAutocapitalize:(id)arg1;
- (id)autocapitalize;
- (void)setAutocorrect:(BOOL)arg1;
- (void)setAutocomplete:(id)arg1;
- (void)setSrc:(id)arg1;
- (id)src;
- (void)click;
- (void)setCustomValidity:(id)arg1;
- (BOOL)checkValidity;
- (id)labels;
- (id)validationMessage;
- (id)validity;
- (BOOL)willValidate;
- (void)setFormTarget:(id)arg1;
- (id)formTarget;
- (void)setFormNoValidate:(BOOL)arg1;
- (BOOL)formNoValidate;
- (void)setFormMethod:(id)arg1;
- (id)formMethod;
- (void)setFormEnctype:(id)arg1;
- (id)formEnctype;
- (void)setFormAction:(id)arg1;
- (id)formAction;
- (void)setAutofocus:(BOOL)arg1;
- (BOOL)autofocus;
- (void)setAlt:(id)arg1;
- (id)alt;
- (void)setAlign:(id)arg1;
- (id)align;
- (void)setAccessKey:(id)arg1;
- (id)accessKey;
- (BOOL)_isAutofilled;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_selectedRange;
- (void)_replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2 selectingFromIndex:(int)arg3;
- (void)_setAutofilled:(BOOL)arg1;
- (void)_setValueForUser:(id)arg1;
- (id)endPosition;
- (id)startPosition;
- (id)createPeripheral;
- (BOOL)isTextControl;
- (BOOL)isSecure;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)textInputTraits;
- (int)keyboardType;
- (BOOL)isEditing;
- (id)text;
- (BOOL)isLikelyToBeginPageLoad;
- (BOOL)nodeCanBecomeFirstResponder;
- (id)_textFormElement;
- (BOOL)_supportsAccessoryClear;
- (BOOL)_supportsAutoFill;
- (BOOL)_requiresInputView;
- (BOOL)_requiresAccessoryView;
- (void)_stopAssistingDocumentView:(id)arg1;
- (void)_startAssistingDocumentView:(id)arg1;
- (BOOL)_isAssistedDateType;
- (void)_accessoryClear;

@end