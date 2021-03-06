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

#if ENABLE(XPATH)

#include "JSXPathException.h"

#include "KURL.h"
#include "XPathException.h"
#include <runtime/Error.h>
#include <runtime/JSNumberCell.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSXPathException);

/* Hash table */

static const HashTableValue JSXPathExceptionTableValues[5] =
{
    { "code", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathExceptionCode), (intptr_t)0 },
    { "name", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathExceptionName), (intptr_t)0 },
    { "message", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathExceptionMessage), (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathExceptionConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSXPathExceptionTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 127, JSXPathExceptionTableValues, 0 };
#else
    { 10, 7, JSXPathExceptionTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSXPathExceptionConstructorTableValues[3] =
{
    { "INVALID_EXPRESSION_ERR", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathExceptionINVALID_EXPRESSION_ERR), (intptr_t)0 },
    { "TYPE_ERR", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathExceptionTYPE_ERR), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSXPathExceptionConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSXPathExceptionConstructorTableValues, 0 };
#else
    { 4, 3, JSXPathExceptionConstructorTableValues, 0 };
#endif

class JSXPathExceptionConstructor : public DOMConstructorObject {
public:
    JSXPathExceptionConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSXPathExceptionConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSXPathExceptionPrototype::self(exec, globalObject), None);
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

const ClassInfo JSXPathExceptionConstructor::s_info = { "XPathExceptionConstructor", 0, &JSXPathExceptionConstructorTable, 0 };

bool JSXPathExceptionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXPathExceptionConstructor, DOMObject>(exec, &JSXPathExceptionConstructorTable, this, propertyName, slot);
}

bool JSXPathExceptionConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSXPathExceptionConstructor, DOMObject>(exec, &JSXPathExceptionConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSXPathExceptionPrototypeTableValues[4] =
{
    { "INVALID_EXPRESSION_ERR", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathExceptionINVALID_EXPRESSION_ERR), (intptr_t)0 },
    { "TYPE_ERR", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsXPathExceptionTYPE_ERR), (intptr_t)0 },
    { "toString", DontDelete|DontEnum|Function, (intptr_t)static_cast<NativeFunction>(jsXPathExceptionPrototypeFunctionToString), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSXPathExceptionPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 3, JSXPathExceptionPrototypeTableValues, 0 };
#else
    { 8, 7, JSXPathExceptionPrototypeTableValues, 0 };
#endif

const ClassInfo JSXPathExceptionPrototype::s_info = { "XPathExceptionPrototype", 0, &JSXPathExceptionPrototypeTable, 0 };

JSObject* JSXPathExceptionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSXPathException>(exec, globalObject);
}

bool JSXPathExceptionPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSXPathExceptionPrototype, JSObject>(exec, &JSXPathExceptionPrototypeTable, this, propertyName, slot);
}

bool JSXPathExceptionPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSXPathExceptionPrototype, JSObject>(exec, &JSXPathExceptionPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSXPathException::s_info = { "XPathException", 0, &JSXPathExceptionTable, 0 };

JSXPathException::JSXPathException(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<XPathException> impl)
    : DOMObjectWithGlobalPointer(structure, globalObject)
    , m_impl(impl)
{
}

JSXPathException::~JSXPathException()
{
    forgetDOMObject(this, impl());
}

JSObject* JSXPathException::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSXPathExceptionPrototype(JSXPathExceptionPrototype::createStructure(globalObject->objectPrototype()));
}

bool JSXPathException::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSXPathException, Base>(exec, &JSXPathExceptionTable, this, propertyName, slot);
}

bool JSXPathException::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSXPathException, Base>(exec, &JSXPathExceptionTable, this, propertyName, descriptor);
}

JSValue jsXPathExceptionCode(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXPathException* castedThis = static_cast<JSXPathException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XPathException* imp = static_cast<XPathException*>(castedThis->impl());
    JSValue result = jsNumber(exec, imp->code());
    return result;
}

JSValue jsXPathExceptionName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXPathException* castedThis = static_cast<JSXPathException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XPathException* imp = static_cast<XPathException*>(castedThis->impl());
    JSValue result = jsString(exec, imp->name());
    return result;
}

JSValue jsXPathExceptionMessage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXPathException* castedThis = static_cast<JSXPathException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    XPathException* imp = static_cast<XPathException*>(castedThis->impl());
    JSValue result = jsString(exec, imp->message());
    return result;
}

JSValue jsXPathExceptionConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSXPathException* domObject = static_cast<JSXPathException*>(asObject(slotBase));
    return JSXPathException::getConstructor(exec, domObject->globalObject());
}
JSValue JSXPathException::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSXPathExceptionConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsXPathExceptionPrototypeFunctionToString(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSXPathException::s_info))
        return throwError(exec, TypeError);
    JSXPathException* castedThisObj = static_cast<JSXPathException*>(asObject(thisValue));
    XPathException* imp = static_cast<XPathException*>(castedThisObj->impl());


    JSC::JSValue result = jsString(exec, imp->toString());
    return result;
}

// Constant getters

JSValue jsXPathExceptionINVALID_EXPRESSION_ERR(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(51));
}

JSValue jsXPathExceptionTYPE_ERR(ExecState* exec, JSValue, const Identifier&)
{
    return jsNumber(exec, static_cast<int>(52));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, XPathException* object)
{
    return getDOMObjectWrapper<JSXPathException>(exec, globalObject, object);
}
XPathException* toXPathException(JSC::JSValue value)
{
    return value.inherits(&JSXPathException::s_info) ? static_cast<JSXPathException*>(asObject(value))->impl() : 0;
}

}

#endif // ENABLE(XPATH)
