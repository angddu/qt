/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSHTMLBRElement.h"

#include "HTMLBRElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLBRElement);

/* Hash table */

static const HashTableValue JSHTMLBRElementTableValues[3] =
{
    { "clear", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBRElementClear), (intptr_t)setJSHTMLBRElementClear },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBRElementConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLBRElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSHTMLBRElementTableValues, 0 };
#else
    { 4, 3, JSHTMLBRElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSHTMLBRElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLBRElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLBRElementConstructorTableValues, 0 };
#else
    { 1, 0, JSHTMLBRElementConstructorTableValues, 0 };
#endif

class JSHTMLBRElementConstructor : public DOMConstructorObject {
public:
    JSHTMLBRElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSHTMLBRElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSHTMLBRElementPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags), AnonymousSlotCount); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSHTMLBRElementConstructor::s_info = { "HTMLBRElementConstructor", 0, &JSHTMLBRElementConstructorTable, 0 };

bool JSHTMLBRElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBRElementConstructor, DOMObject>(exec, &JSHTMLBRElementConstructorTable, this, propertyName, slot);
}

bool JSHTMLBRElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLBRElementConstructor, DOMObject>(exec, &JSHTMLBRElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLBRElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSHTMLBRElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSHTMLBRElementPrototypeTableValues, 0 };
#else
    { 1, 0, JSHTMLBRElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSHTMLBRElementPrototype::s_info = { "HTMLBRElementPrototype", 0, &JSHTMLBRElementPrototypeTable, 0 };

JSObject* JSHTMLBRElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLBRElement>(exec, globalObject);
}

const ClassInfo JSHTMLBRElement::s_info = { "HTMLBRElement", &JSHTMLElement::s_info, &JSHTMLBRElementTable, 0 };

JSHTMLBRElement::JSHTMLBRElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLBRElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

JSObject* JSHTMLBRElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSHTMLBRElementPrototype(JSHTMLBRElementPrototype::createStructure(JSHTMLElementPrototype::self(exec, globalObject)));
}

bool JSHTMLBRElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBRElement, Base>(exec, &JSHTMLBRElementTable, this, propertyName, slot);
}

bool JSHTMLBRElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSHTMLBRElement, Base>(exec, &JSHTMLBRElementTable, this, propertyName, descriptor);
}

JSValue jsHTMLBRElementClear(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLBRElement* castedThis = static_cast<JSHTMLBRElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLBRElement* imp = static_cast<HTMLBRElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->getAttribute(HTMLNames::clearAttr));
    return result;
}

JSValue jsHTMLBRElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSHTMLBRElement* domObject = static_cast<JSHTMLBRElement*>(asObject(slotBase));
    return JSHTMLBRElement::getConstructor(exec, domObject->globalObject());
}
void JSHTMLBRElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLBRElement, Base>(exec, propertyName, value, &JSHTMLBRElementTable, this, slot);
}

void setJSHTMLBRElementClear(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSHTMLBRElement* castedThisObj = static_cast<JSHTMLBRElement*>(thisObject);
    HTMLBRElement* imp = static_cast<HTMLBRElement*>(castedThisObj->impl());
    imp->setAttribute(HTMLNames::clearAttr, valueToStringWithNullCheck(exec, value));
}

JSValue JSHTMLBRElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLBRElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}


}
